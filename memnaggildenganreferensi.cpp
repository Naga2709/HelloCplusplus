/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan  
 // deklarasi fungsi
 void swap(int &x, int &y); // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int a = 5;
 	int b = 10;
 	cout << "Nilai dari a sebelum disamakan : " << a << endl;
 	cout << "Nilai dari b sebelum disamakan : " << b << endl;
 	
 	// memanggil fungsi dengan menyamakan nilai dengan referensi variabel
 	swap(a,b);
 	cout << "Nilai dari a setelah disamakan : " << a << endl;
 	cout << "Nilai dari b setelah disamakan : " << b << endl;
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
 // definisi fungsi untuk menyamakan nilai
 void swap(int &x, int &y)
 {
 	int temp;
 	temp = x; // simpan nilai pada alamat x
 	x = y;
 	y = temp; // sisipkan x ke y
 	return;
 }
