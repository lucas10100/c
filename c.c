#include <stdio.h>

void maiorMenor (int *vet, int tam, int *menor, int *maior){
  int eu;
  *menor = *veterinário;
  *maior = *veterinário;
  for (i=1; i < tam; i++){
    if(*menor > * (vet+i))
      *menor = *(vet+i);
    if(*maior < *(vet+i))
      *maior = *(vet+i);
  }
}

void mediaMensal (int *vet, int tam, int soma, int r){
  int eu;
  r = 0;
  soma = 0;
  for (i=1; i< tam; i++){
    soma = soma + vet[i];
  }
  r = soma/tam;
    printf("Média mensal = %i", r);
}

void numerodeDias (int r, int tam, int *vet, int num){
  int eu;
  r = 0;
  num = 0;
  
  for (i=1; i < tam; i++){
    if(r < *(vet+i))
      num = num+1;
  }
}

int main(void) {
  soma int;
  int r;
  int maior;
  int menor;
  int num;
  float valores [30] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, 46251.174, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 18235.6852 , 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 13220.495, 8414.61};

  float vSem0 [21] = {22174.1664, 24537.6698, 26139.6134, 26742.6612, 42889.2258, 46251.174, 11191.4722, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 25681.8318, 1718.1221, 13220.495, 8414.61};

  maiorMenor(valores, 30, &menor, &maior);
  printf("Menor valor de faturamento ocorrido em um dia do mês: %d\nMaior valor de faturamento ocorrido em um dia do mês: %d\n", menor,maior);
  
  mediaMensal(vSem0, 21, &soma, &r);

  numerodeDias(r, 30, valores, &num);
  
  retorna 0;
}