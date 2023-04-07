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










//Fonctions réalisées par l'étudiant 3 :
