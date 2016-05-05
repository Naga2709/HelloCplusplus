/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya  
  void hilang (int [], int, int[], int, int[]); // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
  												// int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
  int main() {
  int a[100], b[100], m , n , c , urutkan[200];
  std::cout << "Masukkan angka pada elemen di dalam array pertama : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
  std::cin >> m ;
  std::cout << "Masukkan " << m << " bilang bulat : ";
  for (c = 0; c < m; c++) {
  	std::cin >> a[c];
  }
  std::cout << "Masukkan angka pada elemen di dalam array kedua : ";
  std::cin >> n;
  std::cout << "Masukkan " << n << " bilangan bulat : ";
  for (c = 0; c < n; c++){
  	std::cin >> b[c];
  }
  
  hilang(a, m, b, n, urutkan);
  
  std::cout << "Menyusun array : \n";
  
  for ( c =0; c < m + n; c++) {
  	std::cout << urutkan[c] << " \n";
  }
  
  return 0; // Mengembalikan nilai 0 pada sistem operasi
  }
  void hilang(int a[], int m, int b[], int n, int urutkan[]) {
  	int i, j, k;
  	 j = k = 0;
  	 for (i = 0; i < m + n;) {
  	 	if (j < m && k < n) {
  	 		if (a[j] < b[k]) {
  	 			urutkan[i] = a[j];
  	 			j++;
			   }
			   else {
			   	urutkan[i] = b[k];
			   	k++;
			   }
			   /* jika elemen dari array adalah lebih kecil dari b maka jadikan hal tersebut hasil dari array dan lainnya menjadi elemen dari b di dalam array b */
			   i++;
		   }
		   else if ( j == m) {
		   	for (;i < m + n;) {
		   		urutkan[i] = b[k];
		   		k++;
		   		i++;
		   		// jika array a sudah selesai arahkan seluruh elemen dari b menjadi hasil dari array
			   }
		   }
		   else {
		   	for (; i < m + n;) {
		   		urutkan[i] = a[j];
		   		j++;
		   		i++;
		   		// jika array b sudah selesai maka arahkan seluruh elemen a menjadi hasil dari array
			   }
		   }
	   }
  }
