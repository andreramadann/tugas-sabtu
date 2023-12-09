#include <stdio.h>
     
int main() {
    // Inisialisasi array A dan B
    int A[] = {12, 8, 17, 5, 15};
    int B[] = {5, 11, 7, 25, 9, 12, 14};
    int i,j;

    // Inisialisasi array C
    int C[12];
    int sizeC = 0; // Menyimpan ukuran aktual array C

    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C (dari awal sampai akhir)
    for (  i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        if (A[i] > 10) {
            C[sizeC] = A[i];
            sizeC++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C (dari akhir ke awal)
    for (  i = sizeof(B) / sizeof(B[0]) - 1; i >= 0; i--) {
        if (B[i] > 10) {
            C[sizeC] = B[i];
            sizeC++;
        }
    }

    // Menampilkan isi array C sebelum diurutkan
    printf("b. C = [ ");
    for (  i = 0; i < sizeC; i++) {
        printf("%d ", C[i]);
    }
    printf("]\n");

    // Urutkan array C (bubble sort)
    for (  i = 0; i < sizeC - 1; i++) {
        for (  j = 0; j < sizeC - i - 1; j++) {
            if (C[j] < C[j + 1]) {
                // Tukar nilai jika urutannya salah
                int temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }

   

    return 0;
}

