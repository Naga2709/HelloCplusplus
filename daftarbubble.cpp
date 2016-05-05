/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya   
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
 void bubble_sort(long[], long); // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
 int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	long array[100], n, c, d, swap; // long menyatakan bilangan bulat namun jumlahnya lebih banyak dari biasanya
 	cout << "Masukkan jumlah elemen : ";
 	cin >> n;
 	cout << "Masukkan " << n << " bilangan bulat : ";
 	for ( c=0; c<n; c++ )
 	cin >> array[c];
 	bubble_sort(array, n);
 	cout << "Urutkan daftar dari yang terkecil : ";
 	for ( c=0; c<n; c++)
 	cout << array[c] << "\n";
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
 
 void bubble_sort(long list[], long n)
 {
 	long c,d,t;
 	for ( c=0; c<(n-1);c++ )
 	{
 		for ( d=0; d<n-c-1; d++ )
 		{
 			if (list[d] > list[d+1])
 			{
 				// ratakan
 				t = list[d];
 				list[d] = list[d+1];
 				list[d+1] = t;
			 }
		 }
	 }
 }
