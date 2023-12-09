#include <stdio.h>

int main() {
    // Inisialisasi array A dengan karakter tertentu
     char A[] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
     char C;
     int count = 0;

    // Input karakter C dari pengguna
    printf("Masukkan karakter: ");
    scanf(" %c", &C); // Perhatikan spasi sebelum %c untuk menghindari masalah newline
    
    int i;
    // Mencari apakah karakter C ada dalam array A
    for (  i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        if (A[i] == C) {
            count++;
        }
    }

    // Output hasil
    if (count > 0) {
        printf("ADA\n%d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}

