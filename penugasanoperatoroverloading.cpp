/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan  
 const int MAX = 5;
 
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int arr [MAX] = {10,20,30,40,50};
 	int *ptr[MAX];
 	for (int i = 0; i < MAX; i++)
 	{
 		ptr[i] = &arr[i]; // penugasan alamat dari bilangan bulat
	 }
	 for (int i = 0; i < MAX; i ++)
	 {
	 	cout << "Nilai dari var[ " << i << " ] = " << *ptr[i] << endl;
	 }
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
