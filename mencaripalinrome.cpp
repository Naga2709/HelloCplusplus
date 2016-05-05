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
	char a[100],b[100];
	
	cout << "Masukkan kata yang akan dicek apakah palindrome : ";
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	
	// membalikkan string yang diberikan dan membandingkan apakah membalikkan sama dengan palindrome
	
	if ( strcmp(a,b) == 0)
	cout << "String yang dimasukkan adalah sebuah palindrome\n";
	else
	cout << "String yang dimasukkan bukanlah sebuah palindrome\n";
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
