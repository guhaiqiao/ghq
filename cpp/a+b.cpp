#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> a(20);
	for (int i = 0; i < 20; i++){
		cin >> a[i];
		if (a[i] == 0)
			break;
	}
	sort(a.begin(), a.end());
	cout << a[1];
	return 0;
}