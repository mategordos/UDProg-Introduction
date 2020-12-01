#include "../../std_lib_facilities.h"

int ga[] = {1,2,4,8,16,32,64,128,256,512}; //1. feladat

void f(int a[], int n){ //2. feladat
	int la[10]; // 3.a
	for (int i = 0; i < 10; ++i)
	{
		la[i] = ga[i];
	}// 3.b
	cout << "Print out la" << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << i+1 << ". "<< ga[i] << endl;
	} // 3.c
	int *p = new int[n]; // 3.d
	for (int i = 0; i < n; ++i)
	{
		p[i] = a[i];
	}//3.e
	cout << "Print out free-store array: " << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << i+1 <<". "<< p[i] << endl;
	} // 3.f
	delete p; // 3.g
}


int main(){ // 4. feladat

	f(ga, 10); //4. a
	int aa[10];
	int factadder = 1;
	for (int i = 0; i < 10; ++i)
	{
		factadder *= i+1;
		aa[i] = factadder;
	} // 4.b
	f(aa, 10); // 4.c
	return 0;
}