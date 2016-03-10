/* EXO5 F/P qui calcule la factorielle d’un entier de façon itérative.
Rappel : n != n . (n-1) . (n-2) ….. 1 si n >= 1
= 1 si n = 0 */
#include <iostream>
using namespace std;
// Prototype
int factorielle(int n);
// Main 
int main()
{
	int nb(-1);
	while (nb < 0)
	{ 
	cout << "Entrez un entier : " << endl;
	cin >> nb;
	}
	cout << nb << " != " << factorielle(nb);
}
// Fonction
int factorielle(int n) 
{	
	int fact(n);
	if (n>=1)
	{
		for (int i = 1; i < n; i++)
		{
			fact *= n-i;
		}
	}
	else
	{
		fact = 1;
	}	
	return fact;
}
