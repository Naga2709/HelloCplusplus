/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya   
#include <string.h> // string sebagai header umum dalam C++, digunakan untuk menampilkan strcp, strlen dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
 int cek_vokal(char); // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
 
 int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	char s[100], t[100];
 	int i, j = 0;
 	
 	cout << "Masukkan string vokal yang akan dihapus : ";
 	gets(s);
 	
 	/* pada program kita membuat sebuah string yang baru dan proses memasukkan string dengan karakter per karakter, dan jika huruf vokal ditemukan hal tersebut tidak ditambahkan pada string yang baru dan jika tidak karakter ditambahkan pada string yang baru, setelah string berakhir kita menyalin string yang baru ke string yang asli */
 	
 	for ( i=0; s[i] != '\n'; i++) {
 		if ( cek_vokal(s[i]) == 0) {
 			// jika bukan huruf vokal
 			t[j] = s[i];
 			j++
		 ;}
	 }
	 t[j] = '\0';
	 
	 strcpy(s, t);
	 
	 // kita mengganti awalan string
	 cout << "String setelah menghapus huruf vokal : " << s << "\n";
	 
	 return 0;
 }
 
 int cek_vokal(char c)
 {
 	switch(c) {
 		case 'a':
 			case 'A':
 				case 'e':
 					case 'E':
 						case 'i':
 							case 'I':
 								case 'o':
 									case 'O':
 										case 'u':
 											case 'U':
 	return 1;
	default:
	return 0; // Mengembalikan nilai 0 pada sistem operasi
	 }
 }
