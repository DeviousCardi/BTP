#include <stdio.h>
#include <stdlib.h>
   int moves_hanoi(int n){
     if(n==0){
         return 0; }
   int moves= 2*moves_hanoi(n-1)+1 ;
      return moves; }
int main() {
    int n,i;
    scanf("%d",&n);
    int c;
    for(i=0;i<n;i++){
        scanf("%d",&c);
        printf("%d\n",moves_hanoi(c)); }
	return 0; }