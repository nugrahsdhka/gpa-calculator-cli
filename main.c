#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Masukkan Jumlah Mata Kuliah: "); scanf("%d", &n);

    float sks[n], nilai[n], totalNilaiSKS = 0, totalSKS = 0, ipk;
    char grade[3];

    int i;
    for (i = 0; i < n; i++) {
        printf("\nMata Kuliah Ke-%d\n", i+1);
        printf("Masukkan Jumlah SKS: "); scanf("%f", &sks[i]);
        printf("Masukkan Nilai (A/AB/B/BC/C/CD/D/DE/E): "); scanf("%s", grade);

        if (strcmp(grade, "A") == 0 || strcmp(grade, "a") == 0){
            nilai[i] = 4.0;
        } else if (strcmp(grade, "AB") == 0 || strcmp(grade, "ab") == 0 || strcmp(grade, "A-") == 0 || strcmp(grade, "a-") == 0){
            nilai[i] = 3.5;
        } else if (strcmp(grade, "B") == 0 || strcmp(grade, "b") == 0 ){
            nilai[i] = 3.0;
        } else if (strcmp(grade, "BC") == 0 || strcmp(grade, "bc") == 0 || strcmp(grade, "B-") == 0 || strcmp(grade, "b-") == 0){
            nilai[i] = 2.5;
        } else if (strcmp(grade, "C") == 0 || strcmp(grade, "c") == 0 ){
            nilai[i] = 2.0;
        } else if (strcmp(grade, "CD") == 0 || strcmp(grade, "cd") == 0 || strcmp(grade, "C-") == 0 || strcmp(grade, "c-") == 0){
            nilai[i] = 1.5;
        } else if (strcmp(grade, "D") == 0 || strcmp(grade, "d") == 0){
            nilai[i] = 1.0;
        } else if (strcmp(grade, "DE") == 0 || strcmp(grade, "de") == 0 || strcmp(grade, "D-") == 0 || strcmp(grade, "d-") == 0){
            nilai[i] = 0.5;
        } else if (strcmp(grade, "E") == 0 || strcmp(grade, "e") == 0){
            nilai[i] = 0.0;
        } else {
            printf("\nNilai Tidak Valid\n");
            i--;
            continue;
        };

        totalNilaiSKS += nilai[i] * sks[i];
        totalSKS += sks[i];
    };

    ipk = totalNilaiSKS / totalSKS;

    printf("\n\nIPK: %.2f\n", ipk);
    printf("SKS: %.2f\n", totalSKS);

    return 0;
};