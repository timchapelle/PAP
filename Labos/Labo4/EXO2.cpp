#include <iostream>
#include <cmath>
using namespace std;

int main() {

int nb;

cout << "Entrez un entier : " << endl; cin >> nb;

while (nb < 1 || nb > 20)
{
	cout << "Entrez un entier : " << endl; cin >> nb;
}	
		if ((nb%2) == 0)
		{
			cout << nb << " est pair" << endl;
		}
		else 
		{
			cout << nb << " est impair" << endl;
		}
	
return 0;

}




