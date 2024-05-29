// Faça um programa que sorteie 6 números aleatórios, entre 0 e 99, que não podem se repetir. Em seguida, eles devem ser ordenados //

#include <stdio.h>  
#include <stdlib.h> 
#include <time.h> 

int main(void) {
  
int i = 0, v, igual, vetor[6];

  printf("...: Sorteio 1 Galo no Bar do Airton :...\n\n");
  printf("Estes foram os números sorteados:\n\n");
  srand(time(NULL));

  do{
    vetor[i] = rand() % 100;

    igual = 0;
      for(v = 0; v < i; v++)
      {
      if(vetor[v] == vetor[i])
        igual = 1;
    }
    if(igual == 0)
      i++;
  }
    while(i < 6);

  for(i = 0; i < 6; i++){
   
    printf("%d ", vetor[i]);
  }

  for (i=0; i<6; i++){
      int key = vetor[i];
      v = i - 1;
      while (v >= 0 && vetor[v] > key){
        vetor[v+1] = vetor[v];
        v = v - 1;
      }
      vetor[v + 1] = key;
  }
    printf("\nNúmeros ordenados:\n");
  
    for (i = 0; i < 6; i++){
      printf("%d ", vetor[i]);
    }
      
   
printf("\n\nFim do sorteio!\n");


  return 0;
}