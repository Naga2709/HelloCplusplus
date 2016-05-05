/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya

int angkaPrima(int); // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
main()  // main sebagai tanda inti program

{
	int i , n , hasil;
	
	std::cout << "Masukkan angka dari angka primer yang dibutuhkan : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> n ;
	
	std::cout << "Angka primer dari " << n << " adalah : \n";
	for (i=0;i<n;i++){
		hasil = angkaPrima(i);
		// jika primer maka akan ditampilkan return 1
		
		if (hasil == 1)
		std::cout << i <<"\n";
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}

int angkaPrima(int a )
{
	int c;
	// Memulai dari 2, dan jika hal ini belum lengkap dapat dibagi dengan setiap angka lalu bukan angka primer
	for (c = 2; c <= a-1;c++)
	{
		if(a%c==0)
		return 0;
	}
	if (c == a)
	return 1;
}
