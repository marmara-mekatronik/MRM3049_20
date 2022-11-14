class Hayvan{
	public:
		virtual string konusma(){
			return "Konusamiyor!";
		}
};

class Kedi:Hayvan{
	public:
		string konusma() override {
			return "miyav";
		}
};

class Kopek:Hayvan{
	public:
		string konusma() override {
			return "havhav";
		}
};

int main(){
	Hayvan X;
	Kedi Y;
	Kopek Z;
	cout << "Hayvan: " << X.konusma() << endl;
	cout << "Kedi: " << Y.konusma() << endl;
	cout << "Kopek: " << Z.konusma() << endl;
}
