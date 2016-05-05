/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	// Deklarasi variabel lokal
	char peringkat = 'B';  //  Peringkat sudah ditentukan
	// char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
	
	switch(peringkat) // Pilih peringkat melalui nilai masukan yang diberikan
	{
		// Bentuk yang memiliki nilai
		case 'A' :
			cout << "Amat Baik" << endl; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
			break; // break statemen untuk menjalankan switch atau loop, dan menlanjutkan eksekusi di statement yang pertama bersebrangan dengan switch atau loop.
			
			case 'B' :
			cout << "Baik" << endl;
			break;
			
			case 'C' :
			cout << "Cukup" << endl;
			break;
			
			case 'D' :
			cout << "Buruk" << endl;
			break;
			
			case 'E' :
			cout << "Amat Buruk" << endl;
			break;
			default:
			cout << " Peringkat yang dimasukkan salah" << endl;
			}
			cout << "Tak meraih Peringkat : " << peringkat << endl;
			
			return 0; // Mengembalikan nilai 0 pada sistem operasi
	}
