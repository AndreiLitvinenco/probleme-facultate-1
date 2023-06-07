#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dimensiune,count_poz=0,count_neg=0;
    float s_poz=0,s_neg=0,medie_poz,medie_neg;
    int numere[dimensiune];
    printf("Introduceti dimensiunea sirului: ");
    scanf("%d", &dimensiune);
    while(dimensiune<=0) {
        printf("Introduceti dimensiunea sirului: ");
        scanf("%d", &dimensiune);
    }
    for(int i=0;i<dimensiune;i++) {
        printf("Introduceti numarul %d: ", i+1);
        scanf("%d", &numere[i]);
    }
    for(int i=0;i<dimensiune;i++) {
        if(numere[i]>0) {
            s_poz=s_poz+numere[i];
            count_poz++;
            medie_poz=s_poz/count_poz;
        } else {
            s_neg=s_neg+numere[i];
            count_neg++;
            medie_neg=s_neg/count_neg;
        }
    }
    printf("\n");
    if(count_poz>0) {
        printf("Media numerelor pozitive este: %f\n", medie_poz);
    } else{
        printf("Nu au fost introduse numere negative in sir.\n");
    }
    if(count_neg>0) {
        printf("Media numerelor negative este: %f\n", medie_neg);
    } else {
        printf("Nu au fost introduse numere negative in sir.\n");
    }
    return 0;
}
