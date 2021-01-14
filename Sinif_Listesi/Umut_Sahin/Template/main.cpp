#include <iostream>
#include "Dizi.h"

using namespace std;

int main(){
	
	
	Dizi<int> a[5]={11,55,33,44,22};
    int n = sizeof (a) / sizeof (a[0]);	
	
	Dizi::bubbleSort(a,5);
	cout<<"Dizinin sirali hali"<<endl;
	for (int i = 0; i < n; i++) {
        cout << a[i].m_veri << " " << endl;
    }

    return 0;
	
}

--------------------------------------------------------------------------------
#ifndef INC_32_TEMPLATE_3_DIZI_H
#define INC_32_TEMPLATE_3_DIZI_H

#include <assert.h>

template<class T>
class Dizim
{
public:
	int m_uzunluk;
    T* m_veri;
    Dizi(){
        m_uzunluk=0;
        m_veri=NULL;
    }
    Dizi(int uzunluk){
        assert(uzunluk>0);
        m_veri = new T[uzunluk];
        m_uzunluk=uzunluk;
    }
    ~Dizi(){
        delete[] m_veri;
    }
    void Sil(){
        delete[] m_veri;
        m_veri=NULL;
        m_uzunluk = 0;
    }
   T& operator[](int index){
       assert(index >=0 && index < m_uzunluk);
       return m_veri[index];
    }
    void bubbleSort(T array[],int boyut){                  //bubbleSort
	  int temp;
	  for(int i=0;i<boyut;i++){
		int sirali=1;                                //dizi sıralı mı ?Sıralıysa hiç uğrşama,devam.
		for(int j=1;j<boyut-i;j++){
			if(array[j-1]>array[j]){
				sirali=0;                                //buraya girdiyse şu an değil
				temp=array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
				//cout<<"Yer degistiriyorum.."<<endl;
				
			}
		}
    if(sirali)             //içeri girdim, sirali hala değişmedi. O zaman çıkar giderim çünkü dizi sıralı.
    break;
		
}
}
    
};



#endif //INC_32_TEMPLATE_3_DIZI_H
