#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 20;

}

string status(double r, double n) {
	if (r >= 70 or n >= 80) {
		return "Diterima";
	}else {
		return "Ditolak";
	}
}

string nama[20];
int nilM[20], nilB[20];
float rerataNil[20];

void inputdata() {
	for (int i = 0; i < 20; i++) {
		cout << "Masukan Nama :";
		cin >> nama[i];
		cout << "Masukan Nilai Matematika :";
		cin >> nilM[i];
		cout << "Masukan Nilai Bahasa Inggris :";
		cin >> nilB[i];
			
		rerataNil[i] = rerata(nilM[i], nilB[i]);	
	}
}

void tampilkandata() {
	cout << "nama\t\tsatus" << endl;
	for (int i = 0; i < 20; i++) {
		cout << nama[i] << "\t\t" << status(rerataNil[i], nilM[i]) << endl;
	}
		
}

void hitungJumlahDiterima() {
	int JumlahDiterima = 0;
	int JumlahDitolak = 0;
	for (int i = 0; i < 20; i++) {
		if (status(rerataNil[i], nilM[i]) == "Diterima") {
			JumlahDiterima++;
		}else{
			JumlahDitolak++;
		}
	}
	cout << "JumlahKandidatDiterima" << "JumlahDiterima" << endl;
	cout << "JumlahKandidatDitolak" << "JumlahDitolak" << endl;
}

int main (){
	inputdata();
	tampilkandata();
	hitungJumlahDiterima();
	return 0;
}
