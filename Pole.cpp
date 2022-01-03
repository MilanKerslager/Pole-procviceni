#include <stdio.h>
#define POCET 10

int main()
{
    int cisla[] = { 3, 28, 7, 69 };

    // pole m� velikost 4 prvky, tj. index 0 a� 3
    for (int i = 0; i < sizeof(cisla) / sizeof(int); i++) {
        printf("index: %d, hodnota: %d\n", i, cisla[i]);
    }

    // vytvo�en� pole s n�hodn�mi ��sly
    int nahodna[POCET], min = 2147483647, max = 0;
    long int soucet = 0;
    srand(time(0));
    for (int i = 0; i < POCET; i++) {
        // n�hodn� ��sla od 0 do 100
        nahodna[i] = rand() % 101;
        printf("%d ", nahodna[i]);
        soucet += nahodna[i];
        if (nahodna[i] < min) min = nahodna[i];
        if (nahodna[i] > max) max = nahodna[i];
    }
    printf("\n");
    printf("soucet: %d, prumer: %f\n",
        soucet, (float) soucet/POCET);
    printf("min: %d, max: %d\n", min, max);

    // v�pis pole pozp�tku (od indexu 9 do indexu 0)
    for (int i = POCET - 1; i >= 0; i--) {
        printf("%d ", nahodna[i]);
    }
    printf("\n");

}