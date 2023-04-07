//Fonctions réalisées par l'étudiant 1(Mathis Pignard ) :
#include <iostream>
using namespace std;

int main() {
    // Exemples d'utilisation des fonctions
    int age = 20;
    if (estMajeur(age)) {
        cout << "La personne est majeure" << endl;
    } else {
        cout << "La personne est mineure" << endl;
    }

    double x = 2.5;
    int n = 3;
    cout << "x^n = " << exposant(x, n) << endl;

    double prix = 50.0;
    cout << "Prix avec TVA : " << TVA(prix) << endl;

    int a = 10, b = 20, c = 30;
    cout << "Le plus grand des trois nombres est : " << plusGrand(a, b, c) << endl;

    return 0;
}




bool estMajeur(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}

double exposant(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

double TVA(double prix) {
    double tva = 0.196;
    return prix * (1 + tva);
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










//Fonctions réalisées par l'étudiant 3 :
