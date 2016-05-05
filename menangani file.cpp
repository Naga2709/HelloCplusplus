/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
#include <fstream> // fstream sebagai header umum dalam C++, digunakan untuk membaca file sekaligus memberikan output ke dalam file tersebut
 
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
 
int main()   // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
						// main sebagai tanda inti program
 {
 	char data[100]; // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
 	
 	// Buka file dalam mode penulisan
 	ofstream outfile;
 	outfile.open("afile.exe"); // format file dapat diganti dengan text (.txt) dan lain sebagainya
 	
 	cout << "File dalam mode penulisan " << endl;
 	cout << "Masukkan nama anda : " ;
 	cin.getline(data, 100);
 	
 	// Catat data yang dimasukkan ke dalam file
 	outfile << data << endl;
 	cout << "Silahkan masukkan usia anda (hanya angka saja) : ";
 	cin >> data;
 	// Masukkan ditolak
 	cin.ignore();
 	// Ulangi pencatatan data masukan pada file
 	outfile << data << endl;
 	cout << "Silahkan masukkan  pendidikan anda : ";
 	cin.getline(data,100);
 	outfile << data << endl;
 	// Tutup file yang sudah dibuka
 	outfile.close();
 	// Buka file dalam mode baca
 	ifstream infile;
 	infile.open("afile.text");
 	cout << "File dalam mode baca " << endl;
 	infile >> data;
 	// Catat data pada layar
 	cout << data << endl;
 	// Ulangi membaca data dari fie dan tampilkan 
 	infile >> data;
 	cout << data << endl;
 	
 	infile >> data;
 	cout << data << endl;
 	
 	// Tutup data yang sudah dibuka
 	infile.close();
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
