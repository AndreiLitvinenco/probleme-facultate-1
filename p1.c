#include <stdio.h>
#include <stdlib.h>

/*int maxim_linii(int lin) {
    printf("Introduceti numarul maxim de linii");
    scanf("%d", &lin);
    return lin;
}

int maxim_coloane(int col) {
    printf("Introduceti numarul maxim de coloane");
    scanf("%d", &col);
    return col;
}

int maxim_k(int k) {
    printf("Introduceti numarul maxim de elemente nenule cautate.");
    scanf("%d", &k);
    return k;
} */

int citeste_nr_linii() {
    int nr;
    printf("Introduceti nr de linii:");
    scanf("%d", &nr);
    return nr;
}

int citeste_nr_coloane() {
    int nr;
    printf("Introduceti nr de coloane:");
    scanf("%d", &nr);
    return nr;
}

int citeste_nr_k() {
    int nr;
    printf("Introduceti maxim de elemente nenule:");
    scanf("%d", &nr);
    return nr;
}

int citire_mat(int mat[][100], int lin, int col) {
    int i;
    int j;
    for(i=0;i<lin;i++) {
        for(j=0;i<col;i++) {
            printf("Introduceti elementul matricei mat[%d][%d]=", i+1, j+1);
            scanf("%d", &mat[i][j]);
            }
    }
    return mat[i][j];
}

void citeste_matrice(int mat[][4], int lin, int col) {
    int i,j;
    for(i=0;i<lin;i++) {
        for(j=0;j<col;j++) {
            printf("mat[%d][%d]=", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

/* int afisare(int mat[][4], int lin, int col) {
    int i,j;
    for(i=0;i<lin;i++) {
        for(j=0;j<col;j++) {
            printf("%d", mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return mat[i][j];
} */

/* void afisare_matrice(int mat[][4], int lin, int col, int k){
    printf("Indexul liniilor care verifica cerinta sunt:");
    for(int i=0;i<lin;i++){
        int counter=0;
        for(int j=0;j<col;j++) {
            if(mat[i][j]>0)
            counter++;
        }
        if(counter>=k) {
                printf("\n%d", i+1);
        }
    }
} */ // Afisare cu Index de linie

void afisare_matrice(int mat[][4], int lin, int col, int k){
    for(int i=0;i<lin;i++){
        int counter=0;
        for(int j=0;j<col;j++) {
            if(mat[i][j]>0)
            counter++;
        }
        if(counter>=k) {
            for(int j=0;j<col;j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    }
} // Afisarea liniei efective

int main()
{
    int n,m,k;
    n=citeste_nr_linii();
    m=citeste_nr_coloane();
    k=citeste_nr_k();
    int mat[n][m];
    citeste_matrice(mat,n,m);
    afisare_matrice(mat,n,m,k);
    /*printf("\n");
    printf("%d\n", n);
    printf("%d\n", m);
    printf("%d\n", k); */

    return 0;
}
