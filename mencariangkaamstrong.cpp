/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	int angka, sum = 0, temp, ulang;
	
	std::cout << "Masukkan sebuah angka : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> angka;
	
	temp = angka;
	
	// jika jumlah dari kubus setiap angka didalam sebuah angka adalah sama sebagai angka lalu hal tersebut disebut dengan angka amstrong
	
	while(temp!=0)
	{
		ulang = temp%10;
		sum = sum +
		ulang*ulang*ulang;
		temp=temp/10;
		// Menempatkan setiap unit tempat kubus dengan menambahkan kedalam jumlah
	}
	
	if (angka == sum)
	std::cout << "Angka yang dimasukkan adalah angka amstrong.\n";
	else
	std::cout << "Angka yang dimasukkan bukan angka amstrong.\n";
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
