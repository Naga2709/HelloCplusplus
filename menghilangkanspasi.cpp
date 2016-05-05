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
 	char text[100], kosong[100]; // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
 	int c = 0, d = 0;
 	
 	cout << " Masukkan beberapa text\n";
 	gets(text);
 	
 	while (text[c] != '\0')
 	{
 		// jika dua kesamaan spasi ditemukan maka tidak akan ditambahkan pada string
 		if (!(text[c]==' '&&text[c+1]=='')) {
 			kosong[d] = text[c];
 			d++;
		 }
		 c++;
	 }
	 kosong[d] = '\0';
	 
	 cout << " Text setelah menghapus ruang\n" << kosong << "\n";
	 
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
  } 
