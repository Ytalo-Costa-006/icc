#include <stdio.h>
int quad_correto(char S[9][10], int lin, int col) {
    int conta[10];
    int i,j;
    for (i = 0; i < 10; ++i) conta[i] = 0;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            int l = lin + i;
            int c = col + j;
            int valor = S[l][c] - '0';
            if (valor >= 1 && valor <= 9) {
                conta[valor]++;
                if (conta[valor] > 1) return 0;
            }
        }
    }
}
int col_coreta(char S[9][10], int col) {
    int conta[10];
    int i;
    for (i = 0; i < 10; ++i) conta[i] = 0;
    for (i = 0; i < 9; ++i) {
        int valor = S[i][col] - '0';
        if (valor >= 1 && valor <= 9) {
            conta[valor]++;
            if (conta[valor] > 1) return 0;
        }
    }
    return 1;
}
int lin_correta(char lin[10]) {
    int conta[10];
    int i;
    for (i = 0; i < 10; ++i) conta[i] = 0;
    for (i = 0; i < 9; ++i) {
        int valor = lin[i] - '0';
        if (valor >= 1 && valor <= 9){
            conta[valor]++;
            if (conta[valor] > 1) return 0;
        }
    }
    return 1;
}
int linhas_corretas(char S[9][10]) {
    int lin;
    for (lin = 0; lin < 9; ++lin) {
        if (! lin_correta(S[lin])) return 0;
    }
    return 1;
}
int colunas_corretas(char S[9][10]){
    int col;
    for (col = 0; col < 9; ++col) {
        if (! col_coreta(S, col)) return 0;
    }
    return 1;
}
int quadrados_corretos(char S[9][10]){
    int lin, col;
    for (lin = 0; lin < 9; lin = lin + 3) {
        for (col = 0; col < 9; col = col + 3) {
            if (! quad_correto(S, lin, col)) return 0;
        }
    }
    return 1;
}
int correto(char S[9][10]) {
   if (! linhas_corretas(S)) return 0;
   if (! colunas_corretas(S)) return 0;
   if (! quadrados_corretos(S)) return 0;
   return 1;
}
int main() {
    int lin;
    char S[9][9+1];
    for (lin = 0; lin < 9; ++ lin) {
        scanf("%9s", S[lin]);
    }
    printf("________\n");
    printf("________\n");
    for (lin = 0; lin < 9; ++ lin) {
        printf("%s\n", S[lin]);
    }
    if (correto(S)) {
        printf("Correto\n");
    } else { 
        printf("Incorreto\n");
    }
    return 0;
}
