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
	int r;
	long angka = 0, c, sum = 0, temp;
	
	std::cout << "Masukkan bilangan bulat untuk mengecek apakah angka amstrong : ";
	std::cin >> angka;
	
	std::cout << "Berikut angka amstrong yang ditemukan dari nomor 1 hingga " << angka << "\n";
	
	// Dengan jumlah dari setiap angka di dalam angka yang sama sebagai angka lalu dapat disebut sebagai nomor amstrong
	for (c = 1; c <= angka; c++)
	{
		temp = c;
		while(temp!=0)
		{
			r = temp%10;
			sum = sum + r*r*r;
			temp = temp/10;
			// menempatkan unit angka dan menambahkan ke dalam penjumlahan
		}
		if (c == sum)
		std::cout << c << "\n";
		// jika nomor amstrong lalu tampilkan
		sum = 0;
	 } 
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
}
