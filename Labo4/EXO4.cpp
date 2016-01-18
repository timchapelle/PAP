#include <iostream>
using namespace std;

int main() {
	
double nb, somme, total;
int moyenne;

total = 0;

cout << "Entrez un entier : " ; cin >> nb;

while (nb != 0)
{
	total=total+1;
	somme=somme+nb;
	cout << "Entrez un entier : " ; cin >> nb;
}
somme=somme-nb;
moyenne=somme/total;
cout << "Moyenne = " << moyenne;

return 0;

}
