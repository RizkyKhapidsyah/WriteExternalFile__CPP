#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	ofstream fileSaya;
	
	/*
		3 Mode Penulisan File:
			ios::out		= Default, Operasi Output. (Output)
			ios::app		= Menuliskan Teks Pada Akhir Baris. (Append)
			ios::trunc		= Default, Membuat File Baru Jika Tidak Ada (Truncation)
							  File Tersebut, dan Jika Ada maka 
							  akan dihapus dan diganti dengan file baru.
	*/
	
	fileSaya.open("RizkyKhapidsyah.txt", ios::out);
	fileSaya << "Ini adalah isi teks baru pada fileSaya: RizkyKhapidsyah.txt";
	fileSaya.close();

	int A = 1234567;

	fileSaya.open("Data2.txt", ios::trunc);
	fileSaya << "Ini adalah isi Teks baru pada fileSaya: Data2.txt\n";
	fileSaya << A;
	fileSaya.close();

	fileSaya.open("Data3.txt", ios::app);
	fileSaya << "\nIni adalah isi Teks baru pada fileSaya: Data3.txt";
	fileSaya.close();

	cout << "Seluruh Operasi Selesai. Lihat File .txt Untuk melihat hasilnya" << endl;

	_getch();
	return 0;
}
