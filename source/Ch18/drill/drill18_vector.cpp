#include "../../std_lib_facilities.h"

vector<int> gv = {1,2,4,8,16,32,64,128,256,512}; // 1. feladat

 void f(vector<int> v) { // 2. feladat
	vector<int> lv(v.size()); // 3.a
	lv = gv; // 3.b
	cout << "Print of lv:" << endl;
	for (int i = 0; i < lv.size(); ++i)
	{
		cout << lv[i] << endl;
	} // 3.c

	cout << "Print of lv2:" << endl;
	vector<int> lv2 = v; // 3.d
	for (int i = 0; i < lv2.size(); ++i)
	{
		cout << lv2[i] << endl;
	} // 3.e
}

int main(){
	f(gv); // 4.a
	vector<int> vv;
	int factadder = 1;
	cout << "\nWith argument vector:\n" << endl;
	for (int i = 0; i < 10; ++i)
	{
		factadder *= i+1;
		vv.push_back(factadder);
	} // 4.b
	f(vv); // 4.c
	return 0;
}