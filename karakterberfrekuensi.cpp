/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya   
#include <string.h> // string sebagai header umum dalam C++, digunakan untuk menampilkan strcp, strlen dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	char string [100]; // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
 	int c = 0, hitung[26] = {0};
 	
 	cout << "Masukkan sebuah kalimat : ";
 	gets(string);
 	
 	while(string[c] != '\0')
 	{
 		// hanya mempertimbangkan karakter dari 'a' hingga 'z'
 		
 		if (string[c] >= 'a' && string[c] <= 'z')
 		hitung [string[c]-'a']++;
 		
 		c++;
	 }
	 
	 for (c = 0; c < 26; c++)
	 {
	 	if(hitung[c] != 0)
	 	cout << c+'a' << "occurs" << hitung[c] << " kali telah dimasukkan kedalam kalimat.\n";
	 }
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
