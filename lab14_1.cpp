#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=5;
	char b='A';
	char &c =b;
	int *x =&a;
	char *y =&b;
	int **z =&x;
	cout << "Address a ="<<&a<<"a = "<<a
	<<"\n Address b = "<<(void *)&b<< "b = "<<b
	<<"\n Address c = "<<(void *)&c<< "c = "<<c
	<<"\n Address x = "<<&x<< "x = "<<x
	<<"\n Address y = "<<(void *)&y<< "y = "<<y
	<<"\n Address z = "<<(void *)&z<< "z = "<<z<< endl;

	c ='F';
	cout <<"-------------\n a ="<< a
	<<"\n b = "<<b
	<<"\n c = "<<c
	<<"\n x = "<<x
	<<"\n y = "<<(void *)y
	<<"\n z = "<<z <<endl;

	
	*y ='W';
	cout <<"-------------\n a ="<< a
	<<"\n b = "<<b
	<<"\n c = "<<c
	<<"\n x = "<<x
	<<"\n y = "<<(void *)y
	<<"\n z = "<<z <<endl;

	*x =6;
	cout <<"-------------\n a ="<< a
	<<"\n b = "<<b
	<<"\n c = "<<c
	<<"\n x = "<<x
	<<"\n y = "<<(void *)y
	<<"\n z = "<<z <<endl;

	**z = 7;
	cout <<"-------------\n a ="<< a
	<<"\n b = "<<b
	<<"\n c = "<<c
	<<"\n x = "<<x
	<<"\n y = "<<(void *)y
	<<"\n z = "<<z <<endl;






	


	
	
	
	return 0;
}
