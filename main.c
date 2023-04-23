#include <stdio.h>

int main(void) {
  int opcao;
  
  while(opcao != 0 && opcao != 1){
    printf("\nDigite uma opcão: ");
    scanf("%d", &opcao);
    
    if(opcao == 0){
      printf("\nOpção = 0 - escolhida");
    }else if(opcao == 1){
      printf("\nOpcao = 1 - escolhida");
    }else{
      printf("\nOpção Inválida!");
    }
  }
  return 0;
}