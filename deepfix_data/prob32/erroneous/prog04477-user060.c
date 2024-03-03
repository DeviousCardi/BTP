#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,ans,min=32768;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        for(j=0;j<=i;j++){
        if(array[j]<=min){
            min = array[j];
            ans=j; }
        printf("%d",ans); } }
	return 0; }