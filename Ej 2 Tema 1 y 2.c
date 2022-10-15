#include <stdio.h>
#include <stdlib.h>

int main()
{
    //n1=a n2=b n3=c
    float n1,n2,n3;

    printf("Introduzca el valor de un lado de la base del prisma: ");
    scanf("%f",&n1);
    //printf("%.0f",n1);

    printf("Introduzca del otro lado de la base del prisma: ");
    scanf("%f",&n2);
    //printf("%.0f",n2);

    printf("Introduzca el valor de la altura del prisma: ");
    scanf("%f",&n3);
    //printf("%.0f",n3);

    //printf("\n(%.2f * %.2f) * %.2f = %.2f\n", n1, n2, n3, (n1 * n2) * n3);
    printf("\nEl volumen del prisma = %.2f\n", (n1 * n2) * n3);

    return 0;
}
