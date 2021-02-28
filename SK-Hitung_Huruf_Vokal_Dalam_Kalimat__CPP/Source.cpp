#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int jumlahHurufVokal(char*);

int main() {

	char kata[80];
	cout << "Masukkan sebuah kalimat : ";
	cin.getline(kata, 80);
	cout << "\n Jumlah huruf Vokal =  " << jumlahHurufVokal(kata) << " Huruf" << endl;

	_getch();
	return 0;
}

// mengembalikan jumlah vokal dalam array karakter
int jumlahHurufVokal(char* pCh) {
	int hurufVokal = 0;

	while (*pCh) {
		if (strspn(pCh, "aiueo"))
			hurufVokal++;
		pCh++;
	}

	return hurufVokal;
}