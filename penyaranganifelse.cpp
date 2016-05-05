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
 	int nilai;
 	std::cout << "Masukkan nilai anda : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
 	std::cin >> nilai;
 	
 	if (nilai > 100) 
	 /* jika nilai lebih dari 100 */
 	std::cout << "Nilai yang anda masukkan tidak sah";
 	
 	else if (nilai >= 80)
 	/* jika nilai berada pada 80 dan 99 */
 	std::cout << "Peringkat anda adalah A";
 	
 	else if (nilai >= 70)
 	/* jika nilai berada pada 70 dan 79 */
 	std::cout << "Peringkat anda adalah B";
 	
 	else if (nilai >= 50)
 	/* jika nilai berada pada 50 dan 69 */
 	std::cout << "Peringkat anda adalah C";
 	
 	else if (nilai >= 35)
 	/* jika nilai berada pada 35 dan 49 */
 	std::cout << "Peringkat anda adalah D";
 	
 	else
 	/* nilai kurang dari 35 */
 	std::cout << "Peringkat anda adalah E";

 }
