#include <stdio.h>
#include <stdlib.h>
   int hanoi(int n){
     if(n==1){
         return 1; }
   return 2*hanoi(n-1)+1; }
int main() {
    int n,i;
    scanf("%d",&n);
    int c;
    for(i=0;i<n;i++){
        scanf("%d",&c);
        printf("%d",hanoi(c)); }
	return 0; }