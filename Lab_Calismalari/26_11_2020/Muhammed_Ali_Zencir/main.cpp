#include <iostream>
using namespace std;

class person{
	public:
		string name;
		class address{
			public:
				string country;
				int stnumber;
		};
		address addr;
		void Addressplease(){
			cout<<'Name is:'<<name<<endl;
			cout<<'Country Name is:'<<addr.country<<endl;
			cout<<'Street Name:'<<addr.stnumber<<endl;
		}
};
int main()
{
	person anil;
	anil.name='Muhammed Ali';
	anil.addr.country='Tur';
	anil.addr.stnumber='1327';
	anil.addressplease();

    return 0;
}
