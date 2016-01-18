#include <iostream>
using namespace std;

int main() {

int nbEuros,nbCents,nbFrancs;
double taux=40.3399;

cout << "Entrez un nombre d'euros :" << endl;
cin >> nbEuros;
cout << "Entrez un nombre de cents :" << endl;
cin >> nbCents;

nbFrancs=(nbEuros+nbCents/100)*taux;

cout << nbEuros << " euros " << nbCents << " cents vaut " << nbFrancs << " francs belges" << endl;

return 0;

}
