#include <stdio.h>
#include <math.h>

int main (){
    double a, b, c;
    double delta, r1, r2;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a == 0) {
        printf("impossivel calcular\n");
        return 0;
    }

    delta = (b*b) - (4*a*c);

    if (delta < 0) {
        printf("impossivel calcular\n");
        return 0;
    }

    r1 = (-b + sqrt(delta)) / (2*a);
    r2 = (-b - sqrt(delta)) / (2*a);

    printf("R1 = %.5f\n",r1);
    printf("R2 = %.5f\n",r2);

    return 0;
}