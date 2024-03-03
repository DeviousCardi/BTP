#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]); }
        for (j=0;j<n;j++){
        if((array[j]<array[j+1])){
            printf("%d",j);continue; } }
	return 0; }