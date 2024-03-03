#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,count=0,a[100];
    scanf("%d",&N);
    while(N!=0) {
        a[count]=N%10;
        N=N/10;
        printf("%d",a[count]);
        count++; }
      printf("\n%d",count);
	return 0; }