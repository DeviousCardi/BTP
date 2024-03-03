#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,j,N,count,;
    int a[10000];
    count=0;
    scanf("%d",&N);
    scanf("%d",&a[N]);
    for(i=0;i<=N;i++) {
        for(j=0;j<=N;j++) {
            if(a[i]==a[j]);
        }   count++; }
    printf("%d",count);
	return 0; }