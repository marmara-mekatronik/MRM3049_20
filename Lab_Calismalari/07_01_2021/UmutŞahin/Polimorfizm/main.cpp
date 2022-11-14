#include <iostream>
using namespace std;
class Kitaplik{
	public:
		virtual void senKimsin()=0;
};
class Roman:public Kitaplik{
	public:
		void senKimsin()  {
			cout<<"Ben romanim"<<endl;
		}
};
class Masal:public Kitaplik{
	public:
		void senKimsin() {
			cout<<"Ben masalim"<<endl;
		}
};

class Dergi:public Kitaplik{
	public:
		void senKimsin() {
			cout<<"Ben dergiyim"<<endl;
		}
};

int main(){
	Kitaplik *kitapligim[3];
	
	kitapligim[0]=new Roman();
	kitapligim[1]=new Masal();
	kitapligim[2]=new Dergi();
	
	for(int i=0;i<3;i++){
	kitapligim[i]->senKimsin();
	
	}
	
	
	
	
	
	return 0;
}
