#include <iostream>
using namespace std;

int main() {

char carteFidelite;
string client=" ",produit=" ";
double prix,prixTotal,remise,total;;
int qt;

cout << "Nom du client :"; cin >> client;
while (client != "*")
{
	while (produit != "*")
	{
		cout << "Produit : "; cin >> produit;
		cout << "Prix : "; cin >> prix;
		cout << "Quantité : "; cin >> qt;
		
		prixTotal=prix*qt; // Calcul du prix total
		
		cout << "Prix total de l'article " << produit << " : " << prixTotal << " €" << endl;
				
		do 
		{
			cout << "Carte de fidélité ? O/N" << endl; cin >> carteFidelite;
		} while (carteFidelite != 'o' && carteFidelite != 'n');
	
		if (carteFidelite == 'o' || carteFidelite == 'O')
		{
			remise=prixTotal*0.1;
			cout << "Remise : " << remise << " €" << endl;
		}
		else cout << "Pas de remise" << endl;
	
		total=prixTotal-remise;
	
		cout << "Montant à payer de " << client << " : " << total << " €" << endl;
		cout << "Produit : "; cin >> produit;
	} // fin de la boucle while produit != *
	cout << "Client : "; cin >> client;
} // fin de la boucle si client != *
return 0; // si client = *, on quitte le programme
} // fin du main
