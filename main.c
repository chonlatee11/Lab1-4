#include <stdio.h>
void printNDownR(int n);
void printToNR(int i, int n);
int main(void) {
  printNDownR(10);
  printf("\n");
  printToNR(1,10);
  return 0;
}
//4.1
void printNDownR(int n){
if (n){
printNDownR(n-1);     
printf("%d ",n);   
} 
}
//4.2
void printToNR(int i, int n){
if (i<=n){
printToNR(i+1,n);   
printf("%d ",i);   
} 
} 