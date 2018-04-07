# 格式化输出：
#     %o——八进制
#     %d——十进制
#     %x——十六进制
#     %f——保留六位有效数字  %.3f保留三位小数
#     %e——保留小数点后六位，指数输出 %.3e保留3位小数，科学记数法
#     %s——字符串输出
#     %10s——右对齐，占10位
#     %-10s——左对齐，占10位
#     %.2s——截取2位字符串
pi = 3.14
print('%.3f' %pi)
# 字符串用单双引号都可以，为了避免歧义选用，还能用转义字符
# print加r表示不转义
# 变量输出直接打变量就行
# format方法
print('my name is {0},{1},{2} years old'.format('ubook','hh','1'))

# 运算符：
#     x ** y  返回x的y次幂
#     a / b   除法
#     a // b  取整除
#     a%b     取余
#     << , >> 左移右移

# 布尔值：
#     and, or, not
#     True,False 表示真假
# 关于if,while：
'''n = 5
while n > 0:
    score = int(input())  #读入a的值,input以字符串形式读入
    if score < 60:
        print('no')    #python判断作用域靠缩进，so不要随便缩进
    elif score < 70:
        print('hh')
    else:
        print('yes')   #if语句一个条件判断为真时直接跳出
    n = n - 1
注释方法：三个单双引号或者井号'''

# 类型转换：
#     int(), float(), complex(str / int, int / 0)
#     str()  将数字转化为string
#     repr() 返回对象的string格式
#     eval() 执行一个字符串表达式，返回计算的结果
import random
n = random.randint(1, 30)
for i in range(1, 30):                     #函数原型range(start,end,step)
    if i == n:
        print('number is', i)
        break                              #break和continue与c语言一样
    else:
        print('pass', i)
print('over')
#关于随机数：
random.choice(['apple', 'pear', 'banana']) #随机产生给定元素
random.sample(range(100), 10)              #随机产生十个范围内的整数
random.random()                            #随机产生浮点数（1以内）
random.randrange(6)                        #随机产生范围内整数




# 列表 list
name = ['about', 'bid', 'zaa', 'c', 'c']
print(name)
# 删除列表：使用del(列表名)删除整个列表
# 转换：使用list()函数将元组、range对象、字符串或其他类型的可迭代对象类型的数据转换为列表
print(list(range(1, 10, 2)))
print(len(name))                           # len(列表名)可获取列表中元素个数
print(name[0])                             #获取第一个元素
print(name[len(name) - 1])                 #两种获取最后一个元素的方法
print(name[-1])
print(name[-2])                            #负号代表从后往前获取
#列表元素的增加
name = name + ['d']
name.append('e')                           #速度较快，是真正意义上的添加

#时间函数
import time
print(time.time())                         #返回纪元时间
a = []
start1 = time.time()
for i in range(10000):
    a = a + [1]
end1 = time.time()
print(len(a))
print('+', end1 - start1)
b = []
start2 = time.time()
for i in range(10000):
    b.append(1)
end2 = time.time()
print(len(b))
print('append', end2 - start2)

#插入元素   insert(index,object)
name.insert(2, 'jack')
#删除元素   pop(index) remove(value)
name.pop(1)
name.remove('c')                          #移除首次出现的元素
print(name.index('c'))                    #获取指定元素 首次 出现的下标
print(name.count('c'))                    #统计指定元素再列表对象中出现的次数
print(max(name))                          #返回最大/小元素
print(min(name))
print(sum(a))                             #对数值型列表元素进行求和
#in关键字  有True和False两种返回结果，可判断元素是否存在
print('c' in name)
#切片  起始位置（默认为零）：终止位置：步长（默认为1）
b = name[:4]
print(b)



#元组 tuple
#定义方式和列表相同，放在（）里，但为不可变序列
#元组无append(),extend(),insert(),remove(),pop()等方法
c = (1, 2, name, 'a')
print(c)
#优点：
#      速度比列表更快（对常量值遍历时常用元组）
#      可对不需要改变的数据进行“写保护”，使代码更加安全
#      可用作字典键



#字典 dict
# Python通过字典实现映射
# {<键1>:<值1>, <键2>:<值2>, <键3>:<值3>}
# 字典的键不允许重复，此方法访问速度很快
ghq = {}
ghq = {'h': 1, 'hh': 2, 'hhh': 3, 'hhhh':4}
print(ghq['hh'])
ghq['hh'] = 5                             #可修改值或者添加键值对
print(ghq['hh'])
#常用函数和方法
ghq.keys()                                #返回所有的键信息
ghq.values()                              #返回所有的值信息
ghq.get('hh')                             #键存在则返回相应值，否则返回None
ghq.pop('hhh')                            #键存在则返回相应值，同时删除键值对
ghq.popitem()                             #随机取出一个键值对，以元组(key,value)形式返回
ghq.clear()                               #删除所有键值对
# del ghq['h']                              #删除某一个键值对


# 函数（类似重载和泛型，不需要指定类型）
#常用函数
abs(-1)                                   #取绝对值
max([1, 2, 3])
min([1, 2, 3])
len('abc')
divmod(5,2)                               #取模，返回整除和余数
pow(2, 4, 3)                              #乘方 返回（a**b）%c
round(1.3929,3)                           #浮点数保留位数
#库的引用(两种)
import math
math.gcd(16, 4)
from math import gcd,sqrt
gcd(128, 24)                        #返回最大公约数
print(sqrt(16))
#定义
def say(me=1):
    print('happy birthday')
say(2)
#默认值参数必须在参数列表最右端
print(say.__defaults__)
def hhh(a, b, c):                   #关键参数
    print(a, b, c)
hhh(c=3, a=1, b=2)

def hhhh( * p):                     #可变长度参数
    print(p)
hhhh(1, 2, 3, 4)
a = [1, 2, 3, 4, 5, 6]
hhhh( * a)                          #*parameter用来接受多个实参并放在一个元组中

def hhhhh( ** p):                   #**parameter用来接收关键参数并存放在字典中
    for item in p.items():
        print(item)
hhhhh(x=1, y=2, z=3)

#文件的读写
# f = open("C:\Users\10199\Desktop\1.txt", "r")
# print(f.read(3))
# f.close()


# 面向对象
# 类
class Boss():
    life = 20

    def __init__(self, n):
        self.clife = n
        print("I' m boss")
    def hit(self):
        print('nice work')
        self.clife = self.clife - 1

    def check(self):
        if self.clife <= 0:
            print('pass')
        else:
            print(self.clife, 'life left')
little = Boss(15)
big = Boss(100)
little.hit()
little.check()
print(little.life)
big.check()
print(big.life)

# 继承
class parent():
    def lastname(self):
        print("smith")
class grandparent():
    def house(self):
        print("shanghai")
class baby(parent,grandparent):      #继承的声明
    def firstname(self):
        print("jack")
    def lastname(self):              #会覆盖基类
        print("white")
child = baby()
child.firstname()
child.lastname()
child.house()


# 图像处理
from pillow import Image
img = Image.open("cat.jpg")
print(img.size)