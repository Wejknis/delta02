#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta;

    printf("program liczy pierwiastki równania kwadratowego.\n");
    printf("\npodaj współczynniki.\n");
    printf("\npodaj a: ");
    scanf("%lf", &a);
    printf("podaj b: ");
    scanf("%lf", &b);
    printf("podaj c: ");
    scanf("%lf", &c);

    //liczymy deltę
    delta = b * a - 4 * a * c;

    if (delta > 0) {
        //dwa pierwiastki równania kwadratowego
        printf("\nx1 = %lf\n", (-b - sqrt(delta) / (2 * a)));
        printf("\nx2 = %lf\n", (-b + sqrt(delta) / (2 * a)));
            } else{
        if (delta < 0) {
            //nie ma rozwiązania w zbiorze liczb rzeczywistych
            printf("\nrównanie nie ma rozwiązania w zbiorze liczb rzeczywistych.\n");
                    } else { //delta = 0
            // jeden pierwiastek równania kwadratowego
            printf("\nx = %lf\n", -b / (2 * a));
        }
    }

    return 0;
}

