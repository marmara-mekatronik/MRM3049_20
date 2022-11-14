#include <iostream>
using namespace std;


class Kutuphane{
	public:
		void setKitap(int sayfa);
		int getKitap();
		Kutuphane();
	protected:
		int sayfa;
};
class felsefe: public Kutuphane{
	private:
		int cilt;
		
		public:
			void setCilt(int cilt);
			felsefe();
			int getCilt();
	
	
};
int felsefe::getCilt(){return cilt;
}
Kutuphane::Kutuphane(){
	sayfa=0;
}
void Kutuphane::setKitap(int sayfa){
	this->sayfa=sayfa;
}
int Kutuphane::getKitap(){return sayfa;}
void felsefe::setCilt(int cilt){
	this->cilt=cilt;
}
felsefe::felsefe(){
	cilt=1;
}


int main(){
	felsefe felsefe1;
	
	felsefe1.setKitap(11);
	
	cout<<"Sayfa sayiniz:"<<felsefe1.getKitap()<<endl;
	cout<<"Cilt sayiniz:"<<felsefe1.getCilt()<<endl;
	cout<<"Cilt sayiniz degistiriliyor"<<endl;
	
	
	felsefe1.setCilt(2);
	cout<<"Cilt sayiniz:"<<felsefe1.getCilt()<<endl;

	
    
 



	
	
	
	
	
	
	
	
	return 0;
	
}
