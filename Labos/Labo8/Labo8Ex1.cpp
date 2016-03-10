/* EXO1
1°) Refaire Fonction/Procédure qui calcule le maximum de 3 entiers et l’appeler 2 fois.
Version 2 : Cette F/P doit appeler pour les calculs une autre F/P qui calcule le maximum de 2 entiers.
2°) Les utiliser dans un programme qui utilise une table d’entiers à dimension variable (max 20) et qui
affiche le maximum de tous les triples éléments consécutifs de la table. */
#include <iostream>
using namespace std;
// Prototype
int maximum(int a, int b, int c);
// Main
int main() {
	int a,b,c, cpt(0);
	while (cpt <= 1) {
	cout << "Entrez 3 entiers : " << endl;
	cin >> a >> b >> c;
	cout << "Maximum : " << maximum(a,b,c) << endl;
	cpt++;
	}
}
// Fonction
int maximum(int a, int b, int c) {	
	int max;
	
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	return max;
}
