#include <stdio.h>

int berechne_ggT(int a, int b) {

    if (b == 0) 
        return a;

    printf("a: %d ; b: %d\n",a, b);

    return berechne_ggT(b, a % b);
}

int main() 
{

    // Variablen deklarieren

        int zahlA, zahlB, ggT;

    // Eingabe der Zahlen

        printf("Gebe eine Zahl ein: ");
        scanf("%d", &zahlA);

        printf("Gebe eine 2. Zahl ein: ");
        scanf("%d", &zahlB);

    // Funktion zum berechnen des ggT aufrufen
      
         ggT = berechne_ggT(zahlA, zahlB);

    // Ausgabe

        printf("der ggT von %d und %d lautet: %d\n", zahlA, zahlB, ggT);
     

    return 0;
}