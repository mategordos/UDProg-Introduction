#include "../../std_lib_facilities.h"


void print_array10(ostream& os, int* a) // 4. feladat
{
	cout << "Print_array10 fv:\n" << endl;
	for (int i = 0; i < 10; ++i)
	{
		os << i+1 << ": "<< a[i] << endl;
	}
}

void print_array(ostream& os, int* a, int n) // 7. feladat
{
	cout << "Print_array fv " << n << " számmal:\n" << endl;
	for (int i = 0; i < n; ++i)
	{
		os << i+1 << ": " << a[i] << endl;
	}
}

void print_vector(ostream& os, vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		os << i+1 << ": " << *v[i] << endl;
	}
}
void delete_vector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		delete v[i];
	}
}


int main() {
	cout << "Part 1:" << endl;
	int* free = new int[10] {10, 10, 10, 10, 5, 10, 10, 10, 10, 10}; // 1.feladat
/*
	for (int i = 0; i < 10; ++i)
	{
		cout << free[i] << endl;
	} // 2. feladat
*/	delete[] free; // 3. feladat

	int* arrayten = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
//	print_array10(cout, arrayten); // 5. feladat

	int* arrayeleven = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
//	print_array(cout, arrayeleven, 11); // 6. feladat
	
	int* arraytwenty = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
								    110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
//	print_array(cout, arraytwenty, 20); // 8. feladat

	vector<int*> vectorten;
	int adder = 100;
	for (int i = 0; i < 10; ++i)
	{
		vectorten.push_back(new int{adder+i});
	}
	cout << "Vector ten cout: " << endl;
	print_vector(cout, vectorten); // 10/5. feladat

	vector<int*> vectoreleven;
	for (int i = 0; i < 11; ++i)
	{
		vectoreleven.push_back(new int{adder+i});
	}
	cout << "Vector eleven cout: " << endl;
	print_vector(cout, vectoreleven); // 10/6. feladat

	vector<int*> vectortwenty;
	for (int i = 0; i < 20; ++i)
	{
		vectortwenty.push_back(new int{adder+i});
	}
	cout << "Vector twenty cout: " << endl;
	print_vector(cout, vectortwenty);

	delete[] arrayten;
	delete[] arrayeleven;
	delete[] arraytwenty;
	delete_vector(vectorten);
	delete_vector(vectoreleven);
	delete_vector(vectortwenty);
//------------------------------------------------------------------------
	
	cout << "\nEnd of part 1\n\n\n\n" << endl;
	//end of part 1
	int var = 7;
	int* p1 = &var; // 1. feladat

	cout << "Var address: " << p1 << endl << "p1 value: " << *p1 << endl; // 2. feladat
	int sevenarray[7] = {1, 2, 4, 8, 16, 32, 64};
	int* p2 = sevenarray; // 3. feladat
	cout << "p2 address: " << p2  << endl;
	cout << "sevenarray: \n" << endl;
	print_array(cout, p2, 7); // 4. feladat
	int* p3 = p2;
	p2 = p1;
	p2 = p3;
	cout << "\nP1:" << p1 << "| P1 points to: " << *p1 << endl;
	cout << "P2:" << p2 << "| P2 points to: " << *p2 << endl;

/*	delete p1;
	delete p2;
	delete p3;
*/
	int tenints[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p1 = &tenints[0];
	int tenintstwo[10];
	p2 = &tenintstwo[0];

	for (int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << i+1 << ". " << tenintstwo[i] << endl;
	}

	vector<int> vec1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p1 = &vec1[0];
	cout << p1 << endl;
	vector<int> vec2{0,0,0,0,0,0,0,0,0,0};
	p2 = &vec2[0];
	for (int i = 0; i < vec1.size(); ++i)
	{
		p2[i] = p1[i];
	}
	cout << "Testing" << endl;
	for (int i = 0; i < vec2.size(); ++i)
	{
		cout <<	vec2[i] << endl;
	}



	return 0;
}