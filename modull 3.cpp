#include <iostream>
using namespace std;
int main() {
	double harga, diskon, jumlah_diskon, harga_setelah_diskon;

	cout << "masukan : " << endl;
	cout << "harga barang (RP) :" ;
	cin >> harga;
	cout << "diskon barang (%) :" ;
	cin >> diskon;

	jumlah_diskon = harga * (diskon / 100);
	harga_setelah_diskon = harga - jumlah_diskon;

	cout << "hasil : " << endl;
	cout << "jumlah diskon : RP" << jumlah_diskon << endl;
	cout << "harga setelah diskon : RP" << harga_setelah_diskon << endl;
		
	return 0;
}
