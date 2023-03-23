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

		while (j >= 0 && arr[j] > temp)		// 4. Looping while dimana nilai j lebih besar
			// arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];			// a. simpan arr[j] ke dalam variable arr[j + 1]
			j--;							// b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;					// 5. simpan nilai temp ke dalam arr[j+1]


		cout << endl;						// Output ke layar
		cout << "\nPass " << i << ": ";		// Looping nilai k dimulai dari 0 hingga
		for (int k = 0; k < n; k++)
		{
			cout << arr[k] << " ";			// Output ke layar
		}
	}
};

void display()
{
	cout << endl;											// Output ke layar	
	cout << "Total Element Movement= " << n - 1 << endl;	// Cout movement element
	cout << "\n=======================" << endl;			// Output ke layar
	cout << "Element Array yang telah tersusun" << endl;	// Output ke layar
	cout << "\n=======================" << endl;			// Output ke layar

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << endl;

	}
	cout << endl;

}
int main()
{
	input();	//  Memanggil display
	insertionsort();	// Memanggil insertionsort
	display();			// Memanggil display

}