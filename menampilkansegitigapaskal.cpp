/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
long faktorial(int); // long menyatakan bilangan bulat namun jumlahnya lebih banyak dari biasanya
int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
{
	int i,n,c;
	
	std::cout << "Masukkan angka dari baris yang ingin anda lihat didalam segitiga paskal :"; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> n;
	
	for (i = 0; i < n; i++)
	{
		for (c=0; c <=(n-i-2);c++)
		std::cout << " ";
		for (c=0; c<=i;c++)
		std::cout << faktorial(i)/(faktorial(c)*faktorial(i-c));
		std::cout << "\n";
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}

long faktorial (int n)
{
	int c;
	long hasil = 1;
	
	for (c=1;c<=n;c++)
	hasil = hasil*c;
	
	return (hasil);
}
