#include <iostream>

using namespace std;

int main() {

int x= 10;
	int &ref =x;


	*ptr=66;

	ref=20;
	cout<<"ref= "<<ref<<endl ;

	x=30;
	cout<<"ref= "<<ref<<endl ;
	return 0;
	
}
