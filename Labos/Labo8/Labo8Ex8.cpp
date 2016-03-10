/*EXO8 F/P qui calcule de façon itérative le nombre de tabonacci de n.
Les nombres de Fibonacci se calculent de la façon suivante :
F0 = 0
F1 = 1
Fn = Fn-1 + Fn-2
Les nombres de Fibonacci sont donc la suite : 0 1 1 2 3 5 8 13 21 … qui tend vers le nombre d’or.
Exemple d’exécution : Fibonacci de 6 est 8 */
#include <iostream>
using namespace std;
// Prototype 
int tabonacci(int a);
// Main 
int main() 
{
	int nb(-1);
	while (nb < 0)
	{
		cout << "Entrez un entier positif : " << endl;
		cin >> nb;
	}
	cout << tabonacci(nb) << endl;
}
// Fonction
int tabonacci(int a)
{
	int tab[a];
	tab[0]=1;
	tab[1]=1;
	for (int i = 2; i <= a ; i++)
	{
		tab[i] = tab[i-1]+tab[i-2];
	}
	return tab[a-1];
}
