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
 	int n , balik = 0;
 	
 	std::cout << "Masukkan angka untuk dibalikan \n: "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
 	std::cin >> n;
 	
 	while (n!=0)
 	{
 		balik = balik * 10;
 		balik = balik + n%10;
 		n = n/10;
	 }
	 // mengambil tempat angka dan mengubah ke pengembalian membagi dan tanpa menyimpan bagian unit penyimpanan
	 std::cout << "Pembalikan memasukkan angka = " << balik << "\n";
	 
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
