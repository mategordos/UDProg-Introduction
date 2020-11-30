#include "../../std_lib_facilities.h"

void swap_v(int a,int b)
{	
	{
		int temp; 
		temp = a, 
		a=b; 
		b=temp;
	}
}


void swap_r(int& a,int& b)
{
	{
		int temp; 
		temp = a, 
		a=b; 
		b=temp;
	}
}
/* ez nem működik, mert const és nem lehet más értéke a változóknak, így nem lehet őket kicserélni sem
void swap_cr(const int& a ,const int& b)
{		
	{
		int temp; 
		temp = a, 
		a=b; 
		b=temp;
	}
}
*/


int main() 
{
	int x = 7;
	int y = 9;

	cout << "Value of x: "<< x << " and y: " << y << endl;
	swap_v(x,y);
	cout << "Value of x: "<< x << " and y: " << y << " (after swap_v)" << endl;
	swap_r(x,y);
	cout << "Value of x: "<< x << " and y: " << y << " (after swap_r)" << endl;
//  azért az r-rel működik jól, mert a v csak másolatot kezel, ezért nem cserélődnek ki az értékek
	swap_v(7,9);
//	swap_r(7,9);
//  a swap_r itt nem fut le, nincs mire "referálni?"
	

	const int cx = 7;
	const int cy = 9;

	cout << "Value of cx: "<< cx << " and cy: " << cy  << endl;
	swap_v(cx,cy);
	cout << "Value of cx: "<< cx << " and cy: " << cy << " (after swap_v)" << endl;
	//nincs csere, lefordul
	
	//swap_r(cx,cy)
	//int referencia, const intre nem műkszik?
	swap_v(7.7,9.9); 
	//nem tudom kiiratni, elveszik a csere a futás után


	double dx = 7.7;
	double dy = 9.9;

	cout << "Value of dx: "<< dx << " and dy: " << dy << endl;
	swap_v(dx,dy); //szinten masolat csak
	cout << "Value of dx: "<< dx << " and dy: " << dy << " (after swap_v)" << endl;

	swap_v(7.7,9.9);
	//elveszik

//	swap_r(dx,dy);

//	swap_r(7.7,9.9); az a baj valószínüleg, hogy double-ök a változók, és intre van paraméterezve a fv


	return 0;
}
