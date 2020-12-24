#include <iostream>
using namespace std;
class Base{
	protected:
		int a;
		
		public:
			Base(int a=0):a(a){
			cout<<"Base kurucu calisti"<<endl;
			}
			void setDeger(int k){
				a=k;
				
				cout<<"Base set() calisti"<<endl;
			}
			int getDeger(){return a;	}
			Base operator+(Base& m ){
				Base base1;
				base1.a=this->a+m.a;
				cout<<"Base operator+ calisti."<<endl;
				return base1;
			}
			
	
	
};

class Derived:public Base{
	protected:
		 int c;
		
		public:
		Derived(int c=0):c(c){
			cout<<"Derived kullanici calisti."<<endl;
			
		}
		void setDeger(int k){
			c=k;
			
			cout<<"Derived set() calisti"<<endl;
		}
		int getDeger(){return c;
		}
		Derived operator+(Derived& m ){
				Derived derived1;
				derived1.c=this->c+m.c;
				cout<<"Derived operator+ calisti"<<endl;
				return derived1;
			}
			
		
};
 



int main(){
   Base base1;
   Derived derived1;
   Base base2(3);
   Base base3;
   Derived derived2(5);
   Derived derived3;
   
   	derived1.setDeger(15);
   	
	cout<<"Derived1 degeri:"<<derived1.getDeger()<<endl;	
	
	base1.setDeger(8);
	
	cout<<"base1 degeri:"<<base1.getDeger()<<endl;
	
	base3=base1+base2; //operator+ içinde oluşturulan derived1 ile int main içinde oluşturulan derived1 adresi farklı çünkü yapıcı fonk çağırılmış.
	
	cout<<"Base 3 degeri:"<<base3.getDeger()<<endl;
	
	derived3=derived1+derived2;
	
	cout<<"Derived3 degeri:"<<derived3.getDeger();
	
	
	
	
	
	
	
	return 0;
}
