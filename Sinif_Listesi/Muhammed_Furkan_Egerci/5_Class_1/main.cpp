
#include <iostream>
using namespace std;

class Saat{
	private:
	  int Saaat;
	  int Dakika;
	  int Saniye;
	public:
	  int saat(){return Saaat;}
	  int dakika(){return Dakika;}
	  int saniye(){return Saniye;}
	  
	  bool ayarla(int sa,int dk,int s);	

};
   bool Saat::ayarla(int sa,int dk,int s){
   	if((sa<0)||(sa>24))return false;
   	if((dk<0)||(dk>59))return false;
   	if((s<0)||(s>59))return false;
   	Saaat=sa;
   	Dakika=dk;
   	Saniye=s;
   	return true;
   }



int main() {

 Saat sporbaslangic;
 Saat dersbaslangic[10];
 Saat *birsaat;
 Saat alarm;
 birsaat =&alarm;
 
  int a,b,c;

 cout<<"Spor baslangic saatini girin :";
 cin>>a;
 cout<<"Spor baslangic dakikasini girin :";
 cin>>b;
 cout<<"Spor baslangic saniyesini girin :";
 cin>>c;
 
 cout<<"------------------------------------"<<endl;
 
 
 sporbaslangic.ayarla(a,b,c);
 
 
 
 for (int i=0;i<2;i++){
 
 
 int  d,e,f;
 cout<<i+1<<". Ders baslangic saatini girin :";
 cin>>d;
 cout<<i+1<<". Ders baslangic dakikasini girin :";
 cin>>e;
 cout<<i+1<<". Ders baslangic saniyesini girin :";
 cin>>f;
 
 cout<<"------------------------------------"<<endl;
 
 dersbaslangic[i].ayarla(d,e,f);
  
}

 cout<<"Spor baslangic saati :"<<endl;
 cout<<"Saat:"<<sporbaslangic.saat()<<endl;
 cout<<"Dakika:"<<sporbaslangic.dakika()<<endl;
 cout<<"Saniye:"<<sporbaslangic.saniye()<<endl;
 
cout<<"------------------------------------"<<endl;

for (int i=0;i<2;i++){

cout<<i+1<<". Ders baslangic saati :"<<endl;
 cout<<"Saat:"<<dersbaslangic[i].saat()<<endl;
 cout<<"Dakika:"<<dersbaslangic[i].dakika()<<endl;
 cout<<"Saniye:"<<dersbaslangic[i].saniye()<<endl;

  cout<<"------------------------------------"<<endl;
}
 cout<<"Alarm ayarlanan saat :"<<endl;
 birsaat->ayarla(8,30,00);
 cout<<"Saat:"<<birsaat->saat()<<endl;
 cout<<"Dakika:"<<birsaat->dakika()<<endl;
 cout<<"Saniye:"<<birsaat->saniye()<<endl;

return 0;
}
