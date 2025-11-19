#include <iostream>
using namespace std;
int main() {
	double nilai;
	cout << "===PROGRAM MENGHITUNG NILAI MUTU===" << endl;
	cout << "MASUKAN NILAI ANGKA : ";
	cin >> nilai;
	cout << "\nHASIL" << endl;

	if (nilai > 89) {
		cout << "NILAI MUTU : A " << endl;
		cout << "KETERANGAN : NAIK KELAS" << endl;
	}
	if (nilai > 80 && nilai <= 89) {
		cout << "NILAI MUTU : B " << endl;
		cout << "KETERANGAN : NAIK KELAS" << endl;
	}
	if (nilai > 70 && nilai <= 80) {
		cout << "NILAI MUTU : C" << endl;
		cout << "KETERANGAN : NAIK KELAS" << endl;
	} 
	if (nilai > 60 && nilai <= 70) {
		cout << "NILAI MUTU : D" << endl;
		cout << "KETERANGAN : TINGGAL KELAS" << endl;
	}
	if (nilai <= 60) {
		cout << "NILAI MUTU : E" << endl;
		cout << "KETERANGAN : TINGGAL KELAS" << endl;
	}
	return 0;
}
