#include <iostream>
using namespace std;

int main() {
	int nb;
	
	for (int i = 0; i < 20; i++)
	{
		cout << "Entrez un entier : " << endl;
		cin >> nb;
		
		if (nb%2==0)
		{
			cout << nb << " est pair" << endl;
		}
		else
		{
			cout << nb << " est impair" << endl;
		}
		
	}
	return 0;
}
