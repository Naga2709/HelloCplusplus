/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan  
// Area kelas dasar
class Area
{
	public: // public adalah variabel yang dapat diakses oleh semua kelas yang menggunakan kelas yang berisi variabel tersebut
		void setLength (int l) // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
							   // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
		{
			length = l;
		}
		void setAlas(int b)
		{
			Alas = b;
		}
		protected: // protected adalah variabel instan dapat diakses pada kelas sendiri dan subkelasnya
			int length;
			int Alas;
};

// Dasar kelas jumlah
class jumlah
{
	public:
		int getCost (int area)
		{
			return area * 1500;
		}
};

// Hasil kelas
class Ruang: public Area, public jumlah
{
	public:
		int getArea()
		{
			return (length * Alas);
		}
};
int main (void)
{
	Ruang R;
	int area;
	R.setLength(5);
	R.setAlas(7);
	
	area = R.getArea();
	
	// Tampilkan area dari objek
	cout << "Area dari Ruang " << R.getArea() << endl;
	// Tampilkan total pembayaran dari harga
	cout << "Pembayaran dari ruangan " << R.getCost(area) << endl;
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
