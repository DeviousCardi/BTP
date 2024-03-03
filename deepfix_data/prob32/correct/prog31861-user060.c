#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,ans;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]); }
        for (j=0;j<n;j++){
        if((array[j]<array[j+1])&&(array[j]<array[j-1])){
            ans = j;
            printf("%d",ans); } }
	return 0; }