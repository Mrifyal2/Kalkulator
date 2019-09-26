#include <iostream>
using namespace std;

int main() {
	int x, y, z, hasil;
	
	cout << "Menu : " << endl;
	cout << "1. Perkalian (*) "<< endl;
	cout << "2. pemabagian (:) " << endl;
	cout << "3. pengurangan (-) " << endl;
	cout << "4. Pertambahan (+) " << endl;
	cout << " " << endl;
	cout <<"Pilihan Operator : ";
	cin >> z;
	cout << "Masukkan Nilai Pertama : ";
	cin >> x;
	cout << "Masukkan Nilai Kedua : ";
	cin >> y;
	if (z==1) {
		hasil = x*y;
		cout << "Hasil Perkalian : " << hasil;
	} else if (z==2) {
		hasil = x/y;
		cout << "Hasil Pembagian :" << hasil;
	} else if (z==3) {
		hasil = x-y;
		cout << "Hasil Pengurangan :" << hasil;
	} else if (z==4) {
		hasil = x+y;
		cout << "Hasil Pertambahan :" << hasil;
	}
	return 0;
}
