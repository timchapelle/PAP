#include <iostream>
using namespace std;

int main() {
	int nb;
	
	cout << "Entrez un entier : " << endl;
	cin >> nb;
	
	while (nb >=1 && nb <= 20)
	{
		if (nb%2==0)
		{
			cout << nb << " est pair" << endl;
		}
		else
		{
			cout << nb << " est impair" << endl;
		}
		cout << "Entrez un entier : " << endl;
		cin >> nb;
	}
	return 0;
}
