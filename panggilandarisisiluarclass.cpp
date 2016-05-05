/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
 class Segitiga
 {
 	public: // public adalah variabel yang dapat diakses oleh semua kelas yang menggunakan kelas yang berisi variabel tersebut
 		double panjang; // double merupakan tipe data bilangan pecahan presisi ganda
 		double setLuas (double luas); // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
 		double getWidth (double luas);
 		
 		private:
 			double luas;
 		};
 		
 		// Pengartian dari bagian fungsi getWidth
 		double Segitiga::getLuas(void)
 		{
 			return Width;
		 }
		 // Pengartian dari bagian anggota setLuas
		 void Segitiga::setLuas(double luas)
		 {
		 	luas = luas;
		 }
		 
		 // Fungsi utama dari program
		 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
					// main sebagai tanda inti program
		 {
		 	Segitiga S;
		 	
		 	// dapat menset Panjang S dari Segitiga tanpa anggota fungsi sebagai private
		 	S.setLuas(5.0); // gunakan anggota fungsi untuk melakukannya
		 	
		 	cout << " Luas dari Segitiga : " << S.getLuas() << endl;
		 	
		 	return 0; // Mengembalikan nilai 0 pada sistem operasi
		 }
