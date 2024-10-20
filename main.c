#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x1, x2;
    double delta;

    printf("Inserisci il valore di a: ");
    scanf("%lf", &a);
    printf("Inserisci il valore di b: ");
    scanf("%lf", &b);
    printf("Inserisci il valore di c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("L'equazione è di primo grado, questo programma risolve quelle di secondo grado. Riprova.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Le radici dell'equazione sono: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("L'equazione ha come radice: x = %.2lf\n", x1);
    } else {
        printf("Nessuna soluzione reale ammessa per la seguente equazione, delta negativo.\n");
    }

    return 0;
}
