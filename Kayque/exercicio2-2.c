#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ALUNOS 15

int main() {
    srand(time(NULL));

    float notas1[NUM_ALUNOS];
    float notas2[NUM_ALUNOS];
    char desempenho[NUM_ALUNOS];
    float medias[NUM_ALUNOS];

    // a. Simular as notas da primeira avaliação e armazenar em notas1
    printf("Notas da primeira avaliacao:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        notas1[i] = ((float)rand() / RAND_MAX) * 10;
        printf("Aluno %d: %.2f\n", i + 1, notas1[i]);
    }

    // b. Simular as notas da segunda avaliação e armazenar em notas2
    printf("\nNotas da segunda avaliacao:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        notas2[i] = ((float)rand() / RAND_MAX) * 10;
        printf("Aluno %d: %.2f\n", i + 1, notas2[i]);
    }

    // c. Comparar as notas da segunda avaliação com a primeira
    printf("\nDesempenho dos alunos na segunda avaliacao:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (notas2[i] > notas1[i]) {
            desempenho[i] = 'M'; // Melhorou
            printf("Aluno %d: Melhorou\n", i + 1);
        } else if (notas2[i] < notas1[i]) {
            desempenho[i] = 'P'; // Piorou
            printf("Aluno %d: Piorou\n", i + 1);
        } else {
            desempenho[i] = 'N'; // Manteve a nota (N de "Nao mudou")
            printf("Aluno %d: Manteve a nota\n", i + 1);
        }
    }

    // d. Calcular a média das notas nas duas avaliações e armazenar em medias
    for (int i = 0; i < NUM_ALUNOS; i++) {
        medias[i] = (notas1[i] + notas2[i]) / 2.0;
    }

    printf("\nMedias dos alunos nas duas avaliacoes:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %.2f\n", i + 1, medias[i]);
    }

    return 0;
}
