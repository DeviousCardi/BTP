#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,j,count=0,a[100];
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf("%d",a[i]); }
    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
                if(a[i]>a[j])
                count++; }
            printf("%d",count); }
	return 0; }