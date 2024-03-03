#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,ans,min=32768;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        if (array[i]<=min){
        min = array[i];
        ans=i; }
    printf("%d",ans); }
	return 0; }