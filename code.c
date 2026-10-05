#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double x, y;
    printf("¬ведите x и y: ");
    scanf("%lf %lf", &x, &y);
    double up = 1.0 + pow(sin(x + y), 2);
    double down = 2.0 + fabs(x - (2.0 * x) / (1.0 + pow(x * y, 2)));
    double F = (up / down) + x;
    printf("F(%.1e, %.3f) = %.4f\n", x, y, F);

    return 0;
}