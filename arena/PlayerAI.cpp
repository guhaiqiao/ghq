#include "Entry.h"
#include "Logic.h"

#include <iostream>
using namespace std;

int built = false;
void playerAI() {
	if (Logic::Instance()->GetId() == 1) return;
	if (!built){
		Logic::Instance()->Build(0, 0, 1, true);
		Logic::Instance()->Build(0, 20, 3, true);
		built=true;
	}
	for (int i = 0; i < MapSize; i ++) {
		for (int j = 0; j < MapSize; j ++) {
			if (!Logic::Instance()->Attack(i, j, i + 1, j)) {
				if (Logic::Instance()->Move(i, j, i + 1, j)) break;
			}
		}
	}
}

/* ----- 以下操作当且仅当成功时返回 true ----- */

bool build(int x, int y, int type, bool real)
{
	return Logic::Instance()->Build(x, y, type, real);
}
// 在 (fx, fy) 建立一个你的单位，type表示类型，克制关系为 1 > 2 > 3 > 1，此外123相同。4为弓箭手。real为假表示幻象。一个回合只能建立一次。只能建立在基地中。

bool attack(int fx, int fy, int tx, int ty)
{
	return Logic::Instance()->Attack(fx, fy, tx, ty);
}
// 让 (fx, fy) 点的有行动力的你的单位攻击 (tx, ty) 的地方单位，消耗所有行动力

bool move(int fx, int fy, int tx, int ty)
{
	return Logic::Instance()->Move(fx, fy, tx, ty);
}
// 将 (fx, fy) 点的有剩余行动力的你的单位移动到空地 (tx, ty) 点，消耗1行动力

bool hidechange(int x, int y)
{
	return Logic::Instance()->Hidechange(x, y);
}
// 更改位于 (fx, fy) 单位的潜行状态 （潜行变现形、现形变潜行）

/* ----- 以上操作当且仅当成功时返回 true ----- */


int hp(int id)
{
	return Logic::Instance()->GetHP(id);
}
// 返回编号为 id 的玩家剩余的生命值（初始为5）
// 不合法则返回 -1

int money()
{
	return Logic::Instance()->GetMoney();
}
// 返回你当前的剩余金钱

Soldier map(int x, int y)
{
	return Logic::Instance()->GetMap(x, y);
}
// 返回地图上一个位置的单位信息

state mine(int x, int y)
{
	return Logic::Instance()->GetMine(x, y);
}
// 返回地图上一个点的矿物信息，

bool base(int x, int y, int id)
{
	return Logic::Instance()->InBase(x, y, id);
}
// 返回一个点是否是 id 号玩家的基地
