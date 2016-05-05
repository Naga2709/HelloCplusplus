/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
// deklarasi fungsi
double Mencariratarata (int arr[], int ukuran); // double adalah tipe data pecahan (pecahan presisi ganda) dan memiliki jumlah bit sebanyak 64 
int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	// sebuah bilangan bulat dengan manusia 8 usia berbeda
	int seimbang[8] = { 18, 9, 51, 33, 15, 24, 67, 54 };
	double rata;
	
	// melewati pointer melalui array sebagai sebuah argument
	rata = Mencariratarata(seimbang, 8);
	
	// keluaran dari nilai yang dihasilkan
	std::cout << "Rata-rata dari seluruh umur : " << rata << endl;
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}

double Mencariratarata (int arr[], int ukuran)
{
	int i, sum = 0;
	double rata;
	
	for (i = 0; i < ukuran; ++i )
	{
		sum += arr[i];
	}
	
	rata = double (sum) / ukuran;
	return rata;
}
