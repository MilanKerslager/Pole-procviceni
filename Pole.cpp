#include <stdio.h>
#define POCET 10

int main()
{
    int cisla[] = { 3, 28, 7, 69 };

    // pole má velikost 4 prvky, tj. index 0 až 3
    for (int i = 0; i < sizeof(cisla) / sizeof(int); i++) {
        printf("index: %d, hodnota: %d\n", i, cisla[i]);
    }

    // vytvoøení pole s náhodnými èísly
    int nahodna[POCET], min = 2147483647, max = 0;
    long int soucet = 0;
    srand(time(0));
    for (int i = 0; i < POCET; i++) {
        // náhodná èísla od 0 do 100
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

    // výpis pole pozpátku (od indexu 9 do indexu 0)
    for (int i = POCET - 1; i >= 0; i--) {
        printf("%d ", nahodna[i]);
    }
    printf("\n");

}