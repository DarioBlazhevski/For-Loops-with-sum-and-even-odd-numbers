#include <iostream>
#include <cmath>

using namespace std;

int main()
{



 //	for (int i = 1; i <= 10; i += 2)
 //	{
 //		cout << i << " " ;
 // }


	// for (int i = 10; i >= 1; i--)
	// {
	//	cout << i << " ";
	// }

	int n;
	int sum = 0;

	cout << "Korisnikot da vnese vrednost na n : ";
		cin >> n;

		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}

		cout << "\nSummot e : " << sum << endl;

		

	cin.get(); cin.get();

	return 0;

}