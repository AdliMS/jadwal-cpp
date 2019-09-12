//  Copyright by Adli Imam Suryadin, X RPL 2
//  All Rights Reserved

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// deklarasi untuk jumlah array
const size_t jumlahEl = 14;

// pembuatan fungsi untuk tiap kondisi
void senin(string mapel[jumlahEl]) {
	cout << endl;
	cout << "==============" << endl;
	cout << mapel[1] << endl;
	cout << "==============" << endl;
	cout << mapel[11] << endl;
	cout << "==============" << endl;
	cout << mapel[8] << endl;
	cout << "==============" << endl;
}
void selasa(string mapel[jumlahEl]) {
	cout << endl;
	cout << "==============" << endl;
	cout << mapel[10] << endl;
	cout << "==============" << endl;
	cout << mapel[8] << endl;
	cout << "==============" << endl;
	cout << mapel[12] << endl;
	cout << "==============" << endl;
}
void rabu(string mapel[jumlahEl]) {
	cout << endl;
	cout << "==============" << endl;
	cout << mapel[2] << endl;
	cout << "==============" << endl;
	cout << mapel[3] << endl;
	cout << "==============" << endl;
	cout << mapel[0] << endl;
	cout << "==============" << endl;
}
void kamis(string mapel[jumlahEl]) {
	cout << endl;
	cout << "==============" << endl;
	cout << mapel[5] << endl;
	cout << "==============" << endl;
	cout << mapel[7] << endl;
	cout << "==============" << endl;
	cout << mapel[6] << endl;
	cout << "==============" << endl;
}
void jumat(string mapel[jumlahEl]) {
	cout << endl;
	cout << "==============" << endl;
	cout << mapel[3] << endl;
	cout << "==============" << endl;
	cout << mapel[12] << endl;
	cout << "==============" << endl;
	cout << mapel[9] << endl;
	cout << "==============" << endl;
}
void sabtu(string mapel[jumlahEl]) {
	cout << endl;
	cout << "==============" << endl;
	cout << mapel[4] << endl;
	cout << "==============" << endl;
	cout << mapel[13] << endl;
	cout << "==============" << endl;
}

void ambil(string *x) {
	cout << "Hari apa? > ";
	cin >> *x;
}

void Hari(string *x, string y[]) {
	if (*x == "senin") {
		senin(y);
	}
	else if (*x == "selasa") {
		selasa(y);
	}
	else if (*x == "rabu") {
		rabu(y);
	}
	else if (*x == "kamis") {
		kamis(y);
	}
	else if (*x == "jumat") {
		jumat(y);
	}
	else if (*x == "sabtu") {
		sabtu(y);
	}
	else if (*x == "minggu") {
		cout << "HEHEE ITU HARI LIBUR YA:)" << endl;
	}
	else {
		cout << "TANYA HARI WOII" << endl;
	}
}

void kontinu(string *b) {
	cout << "Lanjut?(y/n) > ";
	cin >> *b;
}

int main() {

	// wellcome title
	cout << "Jadwal Pelajaran \n \n";

	// deklarasi variabel pointer dan mengisi nilainya dengan nol
	string *hari = nullptr;
	string *lanjut = nullptr;

	// membuat array string
	string mapel[jumlahEl] = { "Fisika", "Kimia", "Progda", "B.Indo", "Dasdegra", "B.Inggris", "PKN", "Seni Budaya",
	"Komjardas", "SKom", "Sejarah Indonesia", "Simkomdig", "Matematika", "Agama" };

	// memesanan/meminjam memori dari CPU untuk pointer
	hari = new string;
	lanjut = new string;

	// mengambil input dari user
	ambil(hari);
	getchar();

	// pengkondisian untuk setiap input dari user
	Hari(hari, mapel);

	kontinu(lanjut);

	while (*lanjut == "y") {
	if (*lanjut == "y"){
		ambil(hari);
		}
		Hari(hari, mapel);
		kontinu(lanjut);
	}

	// menghapus/mengembalikan memori yang telah dipinjam dari CPU
	delete hari;
	delete lanjut;
	hari = nullptr;
	lanjut = nullptr;

	getchar();
	return 0;
}
