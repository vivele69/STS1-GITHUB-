
//Fonctions réalisées par l'étudiant 1(Mathis Pignard ) :
#include <iostream>
using namespace std;


bool estMajeur(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}

float exposant(float x, int n) {
    float result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

    float TVA(float prix) {
    float TVA = 0.196;
    return prix * (1 + TVA);
}

int plusGrand(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

//Fonctions réalisées par l'étudiant 2 :
bool estPair(int nb)
{
	bool resultat;
	resultat = nb % 2
	if (resultat == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

int sommeNombre(int nb)
{
	int SM = nb;
	cin << nb;
	cout << nb + ;
	if

float salaireNet(int salaire);
{
	float net;
	net = salaire * (23/100)
}
	
int plusPetit(int a, int b, int c)
{
	int nb1 = a;
	int nb2 = b;
    int nb3 = c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a<b<c)
		return a;
	else if (b<a<c)
		return b;
	else
		return c;
}








//Fonctions réalisées par l'étudiant 3 :
