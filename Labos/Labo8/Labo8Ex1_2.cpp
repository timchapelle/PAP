/* EXO1
1°) Refaire Fonction/Procédure qui calcule le maximum de 3 entiers et l’appeler 2 fois.
Version 2 : Cette F/P doit appeler pour les calculs une autre F/P qui calcule le maximum de 2 entiers.
2°) Les utiliser dans un programme qui utilise une table d’entiers à dimension variable (max 20) et qui
affiche le maximum de tous les triples éléments consécutifs de la table. */
#include <iostream>
using namespace std;
// Prototypes
int maximum(int a, int b, int c);
int maximum2(int a, int b);
// Main 
int main() {
	int tab[20],dim;
	cout << "Combien d'éléments (max. 20) ?" << endl;
	cin >> dim;
	cout << "C'est parti :" << endl;
	for (int i = 0; i < dim; i++) {
		cin	>> tab[i];
	}
	for (int i = 0; i < dim-1 ; i += 3)
	{
		cout << "Maximum : " << maximum(tab[i], tab[i+1], tab[i+2]) << endl;		
	}
}
// Fonctions 
int maximum(int a, int b, int c) {	
	int max,tmp;
	tmp=maximum2(a,b);
	if (c > tmp) { max = c; }
	else { max = tmp; }
	return max;
}
int maximum2(int a, int b) {
	int max;
	if (a > b) { max = a; }
	else { max = b; }
	return max;
}
