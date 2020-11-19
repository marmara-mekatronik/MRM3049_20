#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int x=10;
	int& ref=x;
	
	int *ptr=&x;
	int *ptr2=&ref;
	*ptr=65;
	
	ref=20;
	cout <<"x = " << x << endl ;

	x=30;
	cout <<"ref = " << ref << endl ;
	 
	return 0;
}
