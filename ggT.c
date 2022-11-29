#include <stdio.h>

int gcd(int a, int b) {

    if (b == 0) 
        return a;

    return gcd(b, a % b);


}

int main() 
{
    int zahlA, zahlB;

    printf("Gebe eine Zahl ein: ");
    scanf("%d", &zahlA);

    printf("Gebe eine 2. Zahl ein: ");
    scanf("%d", &zahlB);

    printf(gcd(zahlA, zahlB));
}