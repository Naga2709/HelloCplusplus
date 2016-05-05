/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 int string_ln(char*);
 
int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	char str[20]; // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
 	int length;
 	
 	cout <<"\nMasukkan satu kata : ";
 	gets(str);
 	
 	length = string_ln(str);
 	cout << "Panjang dari kata yang dimasukkan " << str << " adalah : " << length;
 }
 int string_ln(char*p) /*p=&str[0]*/
 {
 	int count = 0;
 	while (*p!='\0') {
 		count ++;
 		p++;
	 }
	 return count;
 }
