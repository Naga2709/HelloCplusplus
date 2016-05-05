/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
// Deklarasi fungsi
void func(void); // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 

static int count = 5; // Variabel global
					  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
main() // main sebagai tanda inti program
{
	while (count--)
	{
		func();
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}

// Definisi fungsi
void func(void)
{
	static int i = 2; // Variabel statik variabel
	i++;
	std::cout << "i adalah " << i;
	std::cout << " dan jumlahnya adalah " << count << std::endl;
}
