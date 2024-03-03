#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,ans=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]); }
        for (j=0;j<n-1;j++){
            if((array[j]<array[j+1])&&(array[j]<array[j-1])){
             ans = ans + array[j]; } }
            printf("%d",ans);
	return 0; }