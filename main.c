#include <stdio.h>
#include <math.h>

void wczytaj_parametry(double *a, double *b, double *c);
void wyswietl_info();
void policz_dwa_pierwiastki(double a, double b, double delta);
void poinformuj_ze_nie_ma_rozwiazania();
void policz_jeden_pierwiastek(double a, double b);
double obliczanie_delty(double a, double b, double c);

int main() {
    double a, b, c;
    double delta;

    wyswietl_info();
    wczytaj_parametry(&a, &b, &c);
    delta = obliczanie_delty(a, b, c);

    if (delta > 0) {
        policz_dwa_pierwiastki(a, b, delta);
    } else{
        if (delta < 0) {
            poinformuj_ze_nie_ma_rozwiazania();
        } else { //delta = 0
            policz_jeden_pierwiastek(a, b);
        }
    }

    return 0;
}

double obliczanie_delty(double a, double b, double c) {
    double delta;//liczymy deltę
    delta = b * a - 4 * a * c;
    return delta;
}

void policz_jeden_pierwiastek(double a, double b) {// jeden pierwiastek równania kwadratowego
    printf("\nx = %lf\n", -b / (2 * a));
}

void poinformuj_ze_nie_ma_rozwiazania() {//nie ma rozwiązania w zbiorze liczb rzeczywistych
    printf("\nrównanie nie ma rozwiązania w zbiorze liczb rzeczywistych.\n");
}

void policz_dwa_pierwiastki(double a, double b, double delta) {//dwa pierwiastki równania kwadratowego
    printf("\nx1 = %lf\n", (-b - sqrt(delta) / (2 * a)));
    printf("\nx2 = %lf\n", (-b + sqrt(delta) / (2 * a)));
}

void wyswietl_info() {
    printf("program liczy pierwiastki równania kwadratowego.\n");
    printf("\npodaj współczynniki.\n");
}

void wczytaj_parametry(double *a, double *b, double *c) {
    printf("\npodaj a: ");
    scanf("%lf", a);
    printf("podaj b: ");
    scanf("%lf", b);
    printf("podaj c: ");
    scanf("%lf", c);
}

