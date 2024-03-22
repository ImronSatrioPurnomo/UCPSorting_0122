//SOAL TIPE B
//1. Jadi cara algortima bubble sort membandingkan adalah dengan 
 //jadi bubble sort membandingan dengan cara mencari bagian dari yang terkecil, dan selalu di urutkan dari yang terkecil yang terbesar.
//2. cara shell sort algoritma membandingkan adalah dengan cara
  //-> improves insnertion sorting by comparing the elements separated by a distance of several positions to form multiple sublist
  //-> Applies insertion sort on each sublist to move the elements toward ther correct position
  //-> Helps an element to take a bigger step towards its correct position, thereby reducing the number of comparison
//3. yang harus di pilih adalah algoritma insertion sort dikarenakan algoritma insertion lebih optimal dan efisien jika di gunakan pada data
   //yang sudah tersortir terlebih dahulu. Dan bila data yang sudah di sortir adalah data yang lebih kecil, maka penggunaan algoritma insertion akan lebih efesien dan berguna

#include <iostream>
using namespace std;

int Imron[22];
int n;

void input() {
	while (true) {
		cout << "Mauskan banyaknya element: ";
		cin >> n;
		if (n <= 22)
			break;
		else {
			cout << "\nTidak dapat memeiliki lebih dari 22 elemen. \n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukan elemen" << endl;
	cout << "========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + i) << ": ";
		cin >> Imron[i];
	}
}

void selectionsort()
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (Imron[j] < Imron[min_idx])
				min_idx = j;
		}
		swap(Imron[min_idx], Imron[i]);
	}
}

void diplay() {
	cout << endl;
	cout << "=================" << endl;
	cout << "Elemen yang telah tersusun" << endl;
	cout << "===================" << endl;
	for (int j = 0; j < n; j++) {
		cout << Imron[j] << endl;

	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input();
	selectionsort();
	diplay();
	system("pause");

		return 0;
}