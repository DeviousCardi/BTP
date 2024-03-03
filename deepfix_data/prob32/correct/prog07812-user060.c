#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        if((array[i]<array[i+1])&&(array[i]<array[i-1])){
            printf("%d",i); } }
	return 0; }