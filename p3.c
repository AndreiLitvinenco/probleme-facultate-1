#include <stdio.h>
#include <stdlib.h>

/*int citire_si_validare_n (int n) {
    printf("Introduceti o variabila pentru n.\nValoarea trebuie sa fie cuprinsa intre 1 si 100.\n");
    while (n<1 || n>100) {
        printf("Valoare eronata, introduceti o alta valoare.\n");
        scanf("%d", &n);
    }
    return n;
} */
void citire(int n) {
    while(n<1 || n>100) {
        printf("Valoare eronata. Introduceti o valoare corta=");
        scanf("%d", &n);
    }
}


float p_for(int n) {
    float p=1;
    for(float i=2;i<=n;i++) {
        p=p*(1-(1/(i*i)));
    }
    return p;
}

float p_while(int n) {
    float p=1;
    float i=2;
    while(i<=n) {
        p=p*(1-(1/(i*i)));
        i++;
    }
    return p;
}

float p_do_while(int n) {
    float i=2;
    float p=1;
    do {
        p=p*(1-(1/(i*i)));
        i++;
    } while(i<=n);
    return p;
}

int main()
{
    int n;
    printf("Introduceti o valoare intre 1si 100=");
    scanf("%d", &n);
    citire(n);
    printf("p_for= %f\n", p_for(n));
    printf("p_while= %f\n", p_while(n));
    printf("p_do_while= %f\n", p_do_while(n));
    // main(); //Pentru recursivitate
    return 0;
}
