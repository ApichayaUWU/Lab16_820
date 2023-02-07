#include <iostream>
using namespace std;

int main(){

	int a =5;
	string b ="A";
	string &c = b;
	int *x = &a ;
	string *y, *z;
	y = &b;
	z = &c;


	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	cout << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z << endl;

	c = 'F';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

	y = &b;
	*y = 'W';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

	x = &a;
	*x = 6;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;

	x = &a;
	*x = 7;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;



	
	return 0;
}
