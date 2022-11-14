#include <iostream>
using namespace std;

class askerler {
	
	public:
		int can;
		int hasar;
		int zirh,iyilesme;
		string isim;
		void getAsker();
		void saldir(int d, int f);
		void iyilesmek(int u);
		
		askerler(int c,int y, int z,int i, string ad){
			can=c;
			hasar=y;
			zirh=z;
			iyilesme=i;
			isim=ad;
			
			
		}
		askerler(){
			can=0;
			hasar=0;
			zirh=0;
			iyilesme=0;
			isim="Isim belirtilmedi.";
			
			
		}
		
		
		
		
	
};

void askerler::getAsker(){
			cout << "Birlik ismi:"<< isim<<"\n Cani:"<<can<<"\n Hasar degeri:"<<hasar<<"\n Zirh degeri:"<< zirh<<"\nIyilesme degeri:"<<iyilesme<<endl;
		}
void askerler::saldir(int d,int f){
			
			can -=(d-f);
			}
void askerler::iyilesmek(int u){
		can +=u;			
			
			
		}


int main(){
	
	int sira=0;
	int secenek;
	askerler asker1(10,5,3,3,"Piyade");
	askerler asker2(8,7,3,3,"Zirhli");
	askerler *asker2p;
	asker2p=&asker2;
	while (asker1.can > 0 && asker2p->can > 0){
		
		if( sira % 2 == 00){
			cout << "Sira 1. oyuncuda, bilgileriniz:"<<endl;
			asker1.getAsker();
			cout <<"--------------";
			cout<< "\n Rakibinizin bilgileri:"<<endl;
			asker2.getAsker();
			cout<< "\n Lutfen yapmak istediginiz eylemin degerini giriniz: \n 1. Saldirmak\n 2.Iyilesmek."<<endl;
			cin>>secenek;
			
			switch (secenek){
				case 1:
					asker2p->saldir(asker1.hasar,asker2p->zirh);
					break;
				case 2:
					asker1.iyilesmek(asker1.iyilesme);
					break;
				default:
					cout<<"Gecerli bir eylem degeri girmediniz"<<endl;
					
				}
				
				if(asker2p->can <= 0){
					cout <<" Kazanan 1. oyuncu";
					continue;
				}
				
					
				}
				
			
		else{
			cout <<"Sira 2. oyuncuda, bilgileriniz:"<<endl;
			asker2.getAsker();
			cout<< "\nRakibinizin bilgileri:"<<endl;
			asker1.getAsker();
			cout<<"\n Lutfen yapmak istediginiz eylemin degerini giriniz: \n 1. Saldirmak\n 2.Iyilesmek."<<endl;
			cin>>secenek;
			switch(secenek){
				case 1:
					asker1.saldir(asker2p->hasar,asker1.zirh);
					break;
				case 2:
					asker1.iyilesmek(asker1.iyilesme);
					break;
				default:
					cout<<"Gecerli bir eylem degeri girmediniz"<<endl;
					
				}
				
				
				if(asker1.can <=0){
					cout<<"Kazanan 2. oyuncu";
					continue;
				}
				
			}
			
		sira++;	
		system("CLS");
			
		}
		
		
	}
	
	
	
	

	
	
	



