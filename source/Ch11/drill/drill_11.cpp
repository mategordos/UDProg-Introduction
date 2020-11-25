#include "../../std_lib_facilities.h"


int main() {
	int birth_year = 2001;
	int a, b, c, d = 0;
	cout  << birth_year << "\t(Decimal)\n"
	<< hex << birth_year << "\t(Hexadecimal)\n"
	<< oct << birth_year << "\t(Octal)\n"
	<< dec << endl;

	cout << showbase << endl;
	cout  << birth_year << "\t(Decimal)\n"
	<< hex << birth_year << "\t(Hexadecimal)\n" // 0x base
	<< oct << birth_year << "\t(Octal)\n"; // 0 base

	cout << noshowbase << dec;

/*
	cout << "Enter 1234 4 times!"
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
*/


	cout << defaultfloat << 1234567.89 << "\t(Defaultfloat)\n"
		 << fixed << 1234567.89 << "\t(Fixed)\n"
		 << scientific << 1234567.89 << "\t(Scientific)\n";

//table


	cout << "\n\nTáblázat: \n\n";
	cout << setw(6) << "Gordos" << setw(14) << "Máté" << setw(15) << "4343432" << setw(25) << "mate@email.hu" << endl; 

	cout << setw(6) << "Pál" << setw(14) << "Iván" << setw(15) << "4544432" << setw(25) << "ivanka@email.hu" << endl;

	cout << setw(6) << "József" << setw(14) << "Máté" << setw(15) << "4424032" << setw(25) << "belaww@email.hu" << endl; 

	cout << setw(6) << "János" << setw(14) << "Balázs" << setw(15) << "4111432" << setw(25) << "balazska@email.hu" << endl;

	cout << setw(6) << "Jeremi" << setw(14) << "Máté" << setw(15) << "4343432" << setw(25) << "mate@email.hu" << endl; 

	cout << setw(6) << "János" << setw(14) << "Tyler1" << setw(15) << "4544432" << setw(25) << "lolt1@email.hu" << endl;

	return 0;


}
