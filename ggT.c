#include <stdio.h>

int berechne_ggT(int a, int b) {

    if (b == 0) 
        return a;

    return berechne_ggT(b, a % b);
}

int main() 
{
    int zahlA, zahlB, ggT;

    printf("Gebe eine Zahl ein: ");
    scanf("%d", &zahlA);

    printf("Gebe eine 2. Zahl ein: ");
    scanf("%d", &zahlB);
      
    ggT = berechne_ggT(zahlA, zahlB);
    printf("%d\n", ggT);
     

    return 0;
}