#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int i,j,N,count;
    int a[100];
    count=0;
    scanf("%d",&N);
    scanf("%d",&a[N]);
    for(i=0;i<=N;i++) {
        for(j=N;j>=0;j--) {
            if(a[i]==a[j]);
            count++; } }
    printf("%d",count);
	return 0; }