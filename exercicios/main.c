Prova 1

#include <stdio.h>
int main() {
    int n;
    int soma = 0;
    for(int i=0; i<5; i++){ //para ler cinco valores
        printf("Digite um valor: \n");
        scanf("%d", &n);
        if(n<0 || n>100){
            i--; //invalida a vez
            continue; //volta para o laço
        }
        if(n % 2 ==1 && n % 7 == 0){ //impares divisiveis exatos por 7
            soma+= n;
        }
    }
    printf("Valor final de soma: %d \n", soma);
    return 0;
}


Exercício 3

#include <stdio.h>
#include <stdio.h>
int calcular(int n);
int main() {
    int n = 73; //final do meu rg
    int x = 0;
    for (int i = 0; i < 2; i++) { //vai executar duas vezes
        x+= n % 10; // x vai receber o valor de x mais o resto da divisão de n por 10
    }
    printf("Valor de x: %d \n", x); //Resulta 6.
    return 0;
}

Exercício 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 10
int main() {
    srand(time(NULL));
    int vetor[D] = {0};
    int cont_maiores = 0;
    int soma_impar = 0;
    for (int i = 0; i < D; ++i) {
        vetor[i] = (rand() % 1000) + 1; //randomico entre 1 e 1000
        if(vetor[i] > 500)  cont_maiores++;
        if(vetor[i] < 500 && vetor[i]% 2 ==1){
            soma_impar+= vetor[i];
        }
    }
    printf("Qtd de maiores que 500: %d \n", cont_maiores);
    printf("Soma dos menores que 500 e ímpares: %d \n", soma_impar);
    printf("Valores");
    for (int i = 0; i < D; ++i) {
        printf("[%4d] ", vetor[i]);
    }
    return 0;
}


Exercício 5

#include <stdio.h>
#define D 9
int main() {
    int soma_col[D] = {0};
    int m[D][D] = {0};
    //logica do item a
    for (int i = 0; i < D; ++i) {
        for (int j = 0; j < D; ++j) {
            if(i<j) m[i][j] = 1;
            if(i>j) m[i][j] = -1;
        }
    }
    //logica do item b
    for (int j = 0; j < D; ++j) {
        for (int i = 0; i < D; ++i) { //para cada item da coluna, acumula-se a soma
            soma_col[j] = soma_col[j] + m[i][j];
        }
        printf("Soma da coluna [%d] = %d\n", j, soma_col[j]);
    }
    //imprimindo para checar os valores // nao precisava
    for (int i = 0; i < D; ++i) {
        for (int j = 0; j < D; ++j) {
            printf("[%2d] ", m[i][j]);

        }
        printf("\n");
    }
    return 0;
}