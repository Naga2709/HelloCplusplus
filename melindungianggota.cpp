/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan     
class Kubus // dasar Class
{
	protected: // protected adalah variabel instan dapat diakses pada kelas sendiri dan subkelasnya
		double Panjang; // double merupakan tipe data bilangan pecahan presisi ganda
	};

class KubusKecil:Kubus // KubusKecil diperoleh dari class
{
	public: // public adalah variabel yang dapat diakses oleh semua kelas yang menggunakan kelas yang berisi variabel tersebut
		void setKubusKecil(double len); // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
		double cariPanjangKecil(void);
	};

// Anggota fungsi dari perolehan class (KubusKecil)
double KubusKecil::cariPanjangKecil(void)
{
	return Panjang;
}
void KubusKecil::setPanjangKecil(double len)
{
	Panjang = len;
}

// fungsi utama
int main()
{
	KubusKecil C;
	
	// set panjang kubus dengan anggota fungsi
	C.setPanjangKecil(5.0);
	cout << " Panjang dari kubus : " << C.cariPanjangKecil() << endl;
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
