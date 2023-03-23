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
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	// Menggunakan perulangan for untuk menyimpan data pada array
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];

	}
}
// Procedur Insertionsort
void insertionsort()
{


	int temp;	// Membuat variable data temporer atau penyimpanan sementara
	int j;		// Membuat variable j sebagai tanda

	for (int i = 1; i < n; i++)		// 1. Membuat looping dengan i dimulai dari 1 hingga n-1
	{
		temp = arr[i];		// 2. Simpan nilai arr[i] ke variable sementara temp

		j = i - 1;			// 3. Setting nilai j sama dengan i-1;
