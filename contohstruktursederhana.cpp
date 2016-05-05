/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
#include <cstring> // string sebagai header umum dalam C++, digunakan untuk menampilkan strcp, strlen dan lainnya
 using namespace std;// using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan  
 
 struct Pelajar
 {
 	char nama[100]; // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
 	char kampus[100];
 	char alamat[128];
 	int identitas_pelajar; // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
 };
 int main() // main sebagai tanda inti program
 {
 	struct Pelajar pelajar1; // deklarasikan pelajar1 sebagai pelajar
 	struct Pelajar pelajar2; // deklarasikan pelajar2 sebagai pelajar
 	struct Pelajar pelajar3; // deklarasikan pelajar3 sebagai pelajar
 	
 	// Spesifikasi pelajar 1 
 	strcpy (pelajar1.nama, "A.B.C");
 	strcpy (pelajar1.kampus, "USU");
 	strcpy (pelajar1.alamat, "Padang Bulan");
 	pelajar1.identitas_pelajar = 123456;
 	
 	// Spesifikasi pelajar 2 
 	strcpy (pelajar2.nama, "C.D.E");
 	strcpy (pelajar2.kampus, "UNIMED");
 	strcpy (pelajar2.alamat, "Pancing");
 	pelajar1.identitas_pelajar = 100000;
 	
 	// Spesifikasi pelajar 3 
 	strcpy (pelajar3.nama, "F.G.H");
 	strcpy (pelajar3.kampus, "PARDATUAN");
 	strcpy (pelajar3.alamat, "Kampung Lalang");
 	pelajar1.identitas_pelajar = 111111;
 	
 	// tampilkan info pelajar1
 	cout << "Pelajar 1 bernama : " << pelajar1.nama << endl;
 	cout << "Pelajar 1 berkuliah di : " << pelajar1.kampus << endl;
 	cout << "Pelajar 1 beralamat di : " << pelajar1.alamat << endl;
 	cout << "Pelajar 1 bernomor : " << pelajar1.identitas_pelajar << endl;
 	
 	cout << "\n\n";
 	
 	// tampilkan info pelajar2
 	cout << "Pelajar 2 bernama : " << pelajar2.nama << endl;
 	cout << "Pelajar 2 berkuliah di : " << pelajar2.kampus << endl;
 	cout << "Pelajar 2 beralamat di : " << pelajar2.alamat << endl;
 	cout << "Pelajar 2 bernomor : " << pelajar2.identitas_pelajar << endl;
 	
 	cout << "\n\n";
 	
 	// tampilkan info pelajar3
 	cout << "Pelajar 3 bernama : " << pelajar3.nama << endl;
 	cout << "Pelajar 3 berkuliah di : " << pelajar3.kampus << endl;
 	cout << "Pelajar 3 beralamat di : " << pelajar3.alamat << endl;
 	cout << "Pelajar 3 bernomor : " << pelajar3.identitas_pelajar << endl;
 	
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
