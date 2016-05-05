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
	int s1, s2, s3, s4, s5, sum, total = 500;
	float per; // float berfungsi sebagai tipe data angka ang berkoma dan di panggil menggunakan %f
	
	std::cout <<"\nMasukkan tanda dari 5 subjek : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> s1 >> s2 >> s3 >> s4 >> s5;
	
	sum = s1 + s2 + s3 + s4 + s5;
	std::cout <<"\nSum : " << sum;
	
	per = (sum * 100)/500; // Rumus persentasi
	std::cout << "\nPersentasi : " << per; 
}
