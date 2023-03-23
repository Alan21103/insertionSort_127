#include <iostream>
using namespace std;

int arr[20];		// Membuat array dengan panjang data 20
int n;				// Membuat variable inputan n

void input()
{	// Procedur input 
	while (true)
	{
		cout << "Masukkan Jumlah Data Pada Array : ";		// Membuat inputan jumlah element array
		cin >> n;											// Memanggil variable inputan n

		if (n <= 20)
		{	// Membuat kondisi n tidak lebih dari 20
			break;

		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";
		}
	}


