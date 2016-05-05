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
 	// deklarasi variabel
 	int i;
 	double d; // double adalah tipe data pecahan (pecahan presisi ganda) dan memiliki jumlah bit sebanyak 64 
 	
 	// deklarasi referensi variabel
 	int& r = i;
 	double& s =d;
 	
 	i = 10;
 	cout << " i : " << i << endl;
 	cout << "Menyimpan nilai didalam referensi i : " << r << endl;
 	d = 3.14;
 	cout << " d : " << d << endl;
 	cout << "Menyimpan nilai didalam referesni d : " << s << endl;
 	// menampilkan nilai referensi
 	
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
