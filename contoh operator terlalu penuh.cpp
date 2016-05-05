/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
class Kubus
{
	public: // public adalah variabel yang dapat diakses oleh semua kelas yang menggunakan kelas yang berisi variabel tersebut
		void setLuas (double l) // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
							 	// double merupakan tipe data bilangan pecahan presisi ganda
		{
			Luas = l;
		}
		void setAlas (double b)
		{
				Alas = b;
			}
			void setTinggi (double h)
			{
				Tinggi = h;
			}
			double getVolume (void)
			{
				return Luas * Alas * Tinggi ;
			}
			
			// Overload + operator untuk menjumlahkan 2 objek kubus
			Kubus operator + (const Kubus& b)
			{
				Kubus C;
				C.Luas = this -> Luas + b.Luas;
				C.Alas = this -> Alas + b.Alas;
				C.Tinggi = this -> Tinggi + b.Tinggi;
				return C;
			}
			private: // private adalah variabel yang hanya dapat diakses oleh metode-metode dalam kelas itu sendiri
				double Luas; // Panjang dari sebuah kubus
				double Alas; // Alas dari sebuah kubus
				double Tinggi; // Tinggi dari sebuah kubus
		};
		// Inti dari fungsi program
		int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
					// main sebagai tanda inti program
		{
			Kubus C1; // Deklarasi C1 sebagai tipe kubus
			Kubus C2; // Deklarasi C2 sebagai tipe kubus
			Kubus C3; // Deklarasi C3 sebagai tipe kubus
			double volume = 0.0; // Simpan volume dari kubus disini
			
			// Spesifikasi Kubus 1 
			C1.setLuas(4.0);
			C1.setAlas(6.0);
			C1.setTinggi (5.0);
			
			// Spesifikasi Kubus 2 
			C2.setLuas(8.0);
			C2.setAlas(4.0);
			C2.setTinggi (10.0);
			
			// Volume dari kubus 1
			volume = C1.getVolume ();
			cout << "Volume dari kubus 1 : " << volume  << endl;
			
			// Volume dari kubus 2
			volume = C2.getVolume ();
			cout << "Volume dari kubus 2 : " << volume  << endl;
			
			// Tambahkan dua object berikut
			C3 = C1 + C2;
			
			// Volume dari kubus 3
			volume = C3.getVolume ();
			cout << "Volume dari kubus 3 : " << volume  << endl;
			
			return 0; // Mengembalikan nilai 0 pada sistem operasi
		}
