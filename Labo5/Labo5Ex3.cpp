/*EXO3 Dans un magasin, on fait une facture par client pour différents clients. L’encodage des clients
se terminent lorsqu’on introduit * pour son nom.
Pour chaque facture, on introduit des produits (par produit : description, prix unitaire, quantité
 achetée). L’encodage des produits se terminent lorsqu’on entre * pour sa description.
On demande alors si le client a une carte de membre. Si oui, il aura 10% de remise.
Ex : Nom du client : DUPONT
Produit : coca
Prix : 1.15
Quantité : 4
Prix total de l’article coca = 4.6 €
Produit : choco
Prix : 2.2
Quantité : 3
Prix total de l’article choco = 6.6 €
Produit : *
Prix total : 11.2 €
A-t’ il une carte de fidélité ( - O(ui) – N(on) - ) Z
O(ui) – N(on) SVP ! o
Remise = 1.12 €
Montant à payer de DUPONT = 10.08 €
Nom du client :  									*/

#include <iostream>
using namespace std;

int main() {

	char carteFidelite;
	string client=" ",produit=" ";
	double prix,prixTotal,remise,totalRemise,montantTotal=0.0;
	int qt;

	cout << "Nom du client : "; cin >> client;

	while (client != "*")
	{	
		cout << "Produit : "; cin >> produit;
	
		while (produit != "*")
		{	
			cout << "Prix : "; cin >> prix;
			cout << "Quantité : "; cin >> qt;
		
			prixTotal=prix*qt; // Calcul du prix total
		
			cout << "Prix total de l'article " << produit << " : " << prixTotal << " €" << endl;
		
			montantTotal=montantTotal+prixTotal;
		
			cout << "Produit : "; cin >> produit;
		} // fin de la boucle while produit != *
		
		cout << "Carte de fidélité ? O/N" << endl; cin >> carteFidelite;
		 
		if (carteFidelite == 'o' || carteFidelite == 'O')
		{
			remise=montantTotal*0.1;
			cout << "Remise : " << remise << " €" << endl;
		}
		else 
		{
			cout << "Pas de remise" << endl;
		}
		totalRemise=montantTotal-remise;
		cout << "Montant à payer de " << client << " : " << totalRemise << " €" << endl;
		montantTotal=0; remise=0;
		cout << "Nom du client : " ; cin >> client;
	} // fin de la boucle while client != *
	return 0; // si client = *, on quitte le programme
} // fin du main
