#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

int main() {
	
  system("color 0B");
  setlocale(LC_ALL,"Portuguese");
  
  int tab;
  int cont = 1;
  
  printf("Deseja aprrnder qual tabuada?");
  scanf("%d", &tab);
  
  printf("===TABUADA DO %D===\n");
  printf("===================\n");
  
  do{
  	printf("%d x %d = %d\n", tab, cont, tab*cont);
  	
  }while(cont <= 10);
  printf("==============================\n");
  
  
  
  system("pause");
  return 0;
}
