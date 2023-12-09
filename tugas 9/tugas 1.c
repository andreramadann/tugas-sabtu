#include <stdio.h>
 
int main() {
    // Inisialisasi array A dengan nilai tertentu
     int A[] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
     int N;

    // Input nilai N dari pengguna
    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    // Mencari apakah nilai N ada dalam array A
    int ada = 0;
    int i;
    for ( i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
        if (A[i] == N) {
            ada = 1;
            break; // Keluar dari loop jika sudah ditemukan satu lokasi yang cocok
        }
    }

    // Output hasil
    if (ada) {
        printf("ADA\n");
        printf("Lokasi bilangan yang sama: ");
        int i2;
        for (  i2 = 0; i2 < sizeof(A) / sizeof(A[0]); i2++) {
            if (A[i2] == N) {
                printf("%d ", i2);
            }
        }
        printf("\n");
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}

