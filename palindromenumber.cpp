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
 	int n, balikkan = 0, temp;
 	
 	std::cout << "Cek angka apakah palindrome atau bukan : ";
 	std::cin >> n;
 	
 	temp = n;
 	
 	while (temp!=0)
 	{
 		balikkan = balikkan * 10;
 		balikkan = balikkan + temp%10;
 		temp = temp/10;
	 }
	 // Mengambil tempat dengan memberikan angka yang dilihat mengembalikan angka program
	 
	 if (n = balikkan)
	 // jika pengembalian adalah sama dengan n
	 std::cout << n << " adalah sebuah angka palindrome. \n";
	 else
	 std::cout << n << " bukanlah sebuah angka palindrome.\n";
	 
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
