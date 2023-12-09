#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
#define MAX_SIZE 6

int main() {
    // Array yang dapat menyimpan baik angka maupun string
    void **A = malloc(MAX_SIZE * sizeof(void*));

    char input[200]; // String untuk menyimpan input

    printf("Masukkan data (akhiri dengan 999):\nNOTE : Jika data ingin kosong pada baris ke N ketikan NULL\n");

    int i = 0;
    int skipped = 0; // Variabel untuk melacak jumlah elemen yang diabaikan

    while (1) {
        // Memeriksa apakah pengguna melewatkan input di baris ke-N
        if (scanf("%s", input) != 1) {
            skipped++; // Menambah jumlah elemen yang diabaikan
            continue; // Melanjutkan ke iterasi berikutnya
        }

        if (strcmp(input, "999") == 0) {
            break; // Keluar dari loop jika input adalah "999"
        }

        // Malloc digunakan untuk mengalokasikan memori dinamis untuk string "NULL"
        if (strcmp(input, "NULL") == 0) {
            A[i] = malloc(strlen("NULL") + 1);
            strcpy((char*)A[i], "NULL");
        } else {
            // Jika input adalah angka, konversi ke integer dan simpan di dalam array
            char *endptr;
            int value = strtol(input, &endptr, 10);
            if (*endptr == '\0') {
                A[i] = malloc(sizeof(int));
                *(int*)A[i] = value;
            } else {
                printf("Input tidak valid, masukkan angka atau 'NULL' atau 999 untuk keluar.\n");
                continue; // Ulangi loop jika input tidak valid
            }
        }

        i++;
        if (i + skipped >= MAX_SIZE) {
            // Mengalokasikan lebih banyak memori jika array hampir penuh
            void* temp = realloc(A, (MAX_SIZE + 5) * sizeof(void*));
            if (temp == NULL) {
                fprintf(stderr, "Gagal mengalokasikan memori.\n");
                exit(EXIT_FAILURE);
            }
            A = temp;
        }
    }

    // Menampilkan isi array setelah diinput
    printf("Hasil output:\n");
    int j;
    for (  j = 0; j < i; ++j) {
        if (A[j] == NULL) {
            printf("NULL ADALAH INDEX KE %d\n", j + skipped);
        } else if (strcmp((char*)A[j], "NULL") == 0) {
            printf("NULL ADALAH INDEX KE %d\n", j + skipped);
        } else {
            printf("%d ADALAH INDEX KE %d\n", *(int*)A[j], j + skipped);
        }

        // Setelah selesai, free memori yang dialokasikan untuk setiap elemen
        free(A[j]);
    }

    // Free memori yang dialokasikan untuk array
    free(A);

    return 0;
}

