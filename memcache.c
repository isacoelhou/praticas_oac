#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createmat(int linhas, int colunas, double matriz[linhas][colunas]) {
  srand(time(0)); //garante a aleatoriedade do codigo
  
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      matriz[i][j] = rand(); //chama o random
}}}


int main(/* colocar os parametros l1,c1,c2,l2 e transposta ou normal*/)
{
    int l1, c1, l2, c2, met;

    printf("Quantas linhas terá sua matriz 1?\n"); //essa parte tem que por nos parametros do main
    scanf("%d", &l1);
    printf("E a matriz 2?\n");
    scanf("%d", &l2);
    printf("Quantas colunas terá sua matriz 1?\n");    
    scanf("%d", &c1);
    printf("E a matriz 2?\n");
    scanf("%d", &c2);
    printf("Qual será o metodo da multiplicação?\ndigite: \n[1] para tradicional [2] para transposta\n");
    scanf("%d", &met);
    
    double M1[l1][c1]; //cria a matriz de acordo com o que leu
    double M2[l2][c2];
    
    if (l1 != c2) //critério de multiplicação, se as linhas de uma mat n é igual a coluna de outra não tem como
        printf("Não é possível multiplicar as matrizes\n");
    else{
        createmat(l1, c1, M1); //gera as matrizes aleatorias
        createmat(l2, c2, M2);
        if(met == 1){ //metodo normal
            
        double MR[c1][l2]; //gera a matriz resposta
          
          for (int i = 0; i < l1; i++)
          for (int j = 0; j < c2; j++)
          for (int k = 0; k < c1; k++)
          MR[i][j] += M1[i][k]*M2[k][j]; //multiplicação
       
        }
        else{ //metodo 2
            
        double MT[c2][l2]; //matriz transposta
        for (int i = 0; i < l2; i++) {
        for (int j = 0; j < c2; j++) {
            MT[j][i] = M2[i][j];}} //troca linhas por colunas
        //falta multiplicar a transposta com a normal
        //calcular o tempo de execução
        }
    }
        

    return 0;
}
