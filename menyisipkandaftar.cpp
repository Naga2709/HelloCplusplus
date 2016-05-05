/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int n, array[1000], c,d,t;
 	cout << "Masukkan jumlah elemen : ";
 	cin >> n; // n sebagai nilai masukan
 	cout << "Masukkan " << n << " bilangan bulat\n";
 	for ( c=0; c<n; c++ ) {
 		cin >> array[c];
	 }
	 for ( c=1; c<n-1; c++ ) {
	 	d=c;
	 	// posisi elemen di c, dengan cara semua elemn di urutkan
	 	while ( d>0 && array[d] < array[d-1]) {
	 		t = array[d];
	 		array[d] = array [d-1];
	 		array[d-1] = t;
	 		d--;
		 }
	 }
	 cout << "Urutkan daftar dari yang terkecil:\n";
	 for ( c=0; c<=n-1;c++ ) {
	 	cout << array[c] << "\n";
	 }
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
