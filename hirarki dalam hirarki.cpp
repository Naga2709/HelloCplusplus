/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan  
// Kelas dasar
class Bentuk
{
	public: // public adalah variabel yang dapat diakses oleh semua kelas yang menggunakan kelas yang berisi variabel tersebut
		void setLebar(int w) // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
							 // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
		{
			Lebar = w;
		}
		void setTinggi (int h)
		{
			Tinggi = h;
		}
		protected: // protected adalah variabel instan dapat diakses pada kelas sendiri dan subkelasnya
			int Lebar;
			int Tinggi;
};

// Hasil kelas
class Segitiga : public Bentuk
{
	public:
		int getArea()
		{
			return (Lebar * Tinggi);
		}
};
class Sudut : public Bentuk
{
	public:
		int getArea()
		{
			return (Lebar * Tinggi ) / 2;
		}
};

int main(void) // main sebagai tanda inti program
{
	Segitiga R;
	R.setLebar(6);
	R.setTinggi(8);
	
	// Tampilkan area pada object
	cout << "Area dari segitiga : " << R.getArea() << endl;
	
	Sudut T;
	T.setLebar(5);
	T.setTinggi(6);
	cout << "Area dari sudut : " << T.getArea() << endl;
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
