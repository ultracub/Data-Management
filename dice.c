#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int sai1,sai2,totalValue;  
  char s [ 10 ];
  
  ("What is your name?\n");
  scanf("%s",s);
  printf("Hello,%s!\n",s);

  printf("Rolling the dice...\n");
  sai1 = rand() % 5 + 1;
  sai2 = rand() % 5 + 1;
  totalValue = sai1 + sai2;
  printf("Die 1: %d\nDie 2: %d \ntotalValue: %d",sai1,sai2,totalValue);
  
  }
  
