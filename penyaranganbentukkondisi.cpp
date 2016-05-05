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
	int a = 10;
	int b = 20;
	
	switch (a) // Memilih bentuk
	{
	case 10 :
	std::cout << " Diluar pemilihan bentuk " << endl; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
		
		switch (b)
		{
			case 20:
			std::cout << " Pemilihan dari bentuk didalam" << endl;
		}
	}
	
	std::cout << " nilai a adalah : " << a << endl;
	std::cout << " nilai b adalah : " << b << endl;
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
