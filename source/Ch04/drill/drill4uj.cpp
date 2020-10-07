#include "../../std_lib_facilities.h"

int main() 
{
	string unit;
	vector <string> unitArray;
	double num;
	vector <double> numArray;
	double a=0;
	string exit;
	double sum=0;
	/*
	double num1, num2;
	cout << "Enter 2 numbers" << endl;
	while (cin >> num1 >> num2)
	{
		if (num1>num2) cout << endl << "The bigger value is: " << num1 << "\tThe smaller value is: " << num2 << endl;
		if (num2>num1) cout << endl << "The bigger value is: " << num2 << "\tThe smaller value is: " << num1 << endl;
		if (num1==num2) cout << endl << "The two numbers are the same.." << endl;
		if (abs(num1-num2) <= 0.01 and num1!=num2) cout << endl << "Nearly same." << endl;
	}
	*/
	while(exit!="|")
	{
		cout << "Press any key to continue, or press | to close the program." << endl;
		cin >> exit;
		if(exit == "|") break;
		
		cout << "Enter a number.\n";
		cin >> num;

		cout << "Enter one of these: cm, m, in, ft\n";
		cin >> unit;
		while(unit!="cm"  and unit!="m"  and  unit!="in"  and  unit!="ft")
		{
			cout << "Wrong unit, try again!\n";
			cin >> unit;
		}

		if(unit == "cm")
		{
			num=num/100;
			numArray.push_back(num);
//			unitArray.push_back("m");
		}
		if(unit == "m")
		{
			numArray.push_back(num);
//			unitArray.push_back("m");
		}
		if(unit == "in")
		{
			num=num*0.0254;
			numArray.push_back(num);
//			unitArray.push_back("m");
		}
		if(unit == "ft")
		{
			num=((num*12)*2.54)/100;
			numArray.push_back(num);
//			unitArray.push_back("m");
		}
		
		if(num == *max_element(numArray.begin(),numArray.end()) and numArray.size() != 1)
		    cout << num << " m: the largest so far" << endl;
		    
		if(num == *min_element(numArray.begin(),numArray.end()) and numArray.size() != 1) 
		    cout << num << " m: the smallest so far" << endl;
		
	}//end of while
	if(numArray.size() > 1)
	{
	cout << "\n" << "Biggest number in the Array: " << *max_element(numArray.begin(),numArray.end()) << " m\n";
	cout << "\n" << "Smallest number in the Array: " << *min_element(numArray.begin(),numArray.end()) << " m\n";
	}
	sort(numArray);
	if(numArray.size() > 1)
	{
		cout << "\nThe sorted array: " << endl;
		for (int i = 0; i < numArray.size(); ++i)
		{
			cout << numArray[i] << " m"  << "\n"; 
		}
	}
	if(numArray.size() > 1)
	{
		cout << "Sum of the array:" << endl;
		for (int i = 0; i < numArray.size(); ++i)
		{
			sum+=numArray[i];
		}
		cout << sum  << " m" << endl; 
	}
	return 0;
}
