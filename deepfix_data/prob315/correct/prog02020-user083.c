#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,totl,i,j,k;
    scanf("%d\n",&n);
    int arr[n],elm[n];
    totl=0;
    for(i=0;i<=n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        k=0;
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                k=k+1;
                totl=totl+1; } }
        elm[i]=k; }
	printf("%d\n",totl);
	for(i=0;i<n;i++){
	    printf("%d",elm[i]);
	    printf(" "); }
	return 0; }