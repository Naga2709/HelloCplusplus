/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya  
   int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
  {
  	int m, n, p, q, c, d, k, jumlah = 0;
  	int pertama[10][10], kedua[10][10], perkalian[10][10];
  	std::cout << "Masukkan jumlah dari baris dan kolom pada matriks pertama \n";
  	std::cin >> m >> n; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
  	std::cout << "Masukkan element dari matriks pertama\n";
	  
	  for ( c = 0; c < m; c++ )
	  for ( d = 0; d < n; d++ )
	  std::cin >> pertama[c][d];
	  std::cout << "Masukkan jumlah dari baris dan kolom pada matriks kedua\n";
	  std::cin >> p >> q;
	  
	  if ( n != p)
	  std::cout << "Matriks yang dimasukkan tidak dapat mengalikan dengan sesama.\n";
	  else
	  {
	  	std::cout << "Masukkan element dari matriks kedua\n";
	  	for ( c = 0; c < p; c++ )
	  	{
	  	for ( d = 0; d < q; d++ )
	  	{
		for ( k = 0; k < p; k++ )
	  	{
	  		jumlah = jumlah + pertama[c][k]*kedua[k][d];
		  }
		  perkalian[c][d] = jumlah;
		  jumlah = 0;
	  }
  }
  std::cout << "Hasil dari dimasukkannya matriks:-\n";
  for ( c = 0; c < m; c++ )
  {
  	for ( d = 0; d < q; d++ )
  	std::cout << perkalian[c][d] << "\t";
  	
  	std::cout << "\n";
  }
  }
  return 0; // Mengembalikan nilai 0 pada sistem operasi
}
