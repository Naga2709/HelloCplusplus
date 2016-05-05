/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya

long gcd(long, long); // long menyatakan bilangan bulat namun jumlahnya lebih banyak dari biasanya
int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	long x, y, hcf, lcm;
	
	std::cout << "Masukkan dua angka : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> x >> y;
	
	hcf = gcd (x,y);
	lcm = (x*y)/hcf;
	
	std::cout << "Bagian yang paling besar dan umum " << x << " dan " << y << " = " << hcf << "\n";
	std::cout << "Bagian yang paling kecil dan umum " << x << " dan " << y << " = " << lcm << "\n";
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
 } 
 // jika yang pertama adalah 0 lalu kedua bukan gcd membuat yang kedua bukan 0 dengan bagian yang terkecil dari yang terbesar dan pengembalian yang pertama bukan sebagai gcd
 
 long gcd (long x, long y )
 {
 	if ( x == 0 ) {
 		return y;
	 }
	 
	 while (y!=0)
	 {
	 	if (x > y )
	 	{
	 		x = x - y;
		 }
		 else {
		 	y = y -x;
		 }
	 }
	 return x;
 }
