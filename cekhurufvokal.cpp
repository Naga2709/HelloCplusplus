/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	char cek;
	
	std::cout << "Masukkan sebuah karakter = \n";
	std::cin >> cek;
	
	switch(cek)
	{
		case 'a':
			case 'A':
				case 'e':
					case 'E':
						case 'i':
							case 'I':
								case 'o':
									case 'O':
										case 'u':
											case 'U':
	std::cout << cek << " adalah sebuah huruf vokal.\n";
	break;
	// jika cek cocok dengan setiap bentuk maka lalu tampilkan dan berhenti mengeksekusi
	
	default:
	std::cout << cek << " bukan sebuah huruf vokal.\n";
	// jika cek tidak berasal dari bentuk lalu tampilkan cek sebagai bukan huruf vokal
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
