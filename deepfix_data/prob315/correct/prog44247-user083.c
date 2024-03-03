#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,totl,i,j,elm[1000];
    scanf("%d\n",&n);
    int arr[n];
    totl=0;
    for(i=0;i<=n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        elm[i]=0;
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                elm[i]=elm[i]+1;
                totl=totl+1; } } }
	printf("%d\n",totl);
	for(i=0;i<=n;i++)
	    printf("%d ",&elm[i]);
	return 0; }