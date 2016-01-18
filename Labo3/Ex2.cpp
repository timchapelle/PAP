#include <iostream>

using namespace std;

int main() {
	
	int nb, somme=0;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Entrez un entier : " << endl; cin >> nb;
		somme=somme+nb;
	}
	
cout << "Le total vaut : " << somme ;

return 0;
}

