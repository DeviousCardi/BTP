#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    int arr[n];
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {  scanf("%d",&arr[i]);
        if(i==1) {
        printf("%d",arr[i]); }
       else {
           for(j=0;j<=n-2;j++) {
            scanf("%d",&arr[j]);
            if(arr[i]==arr[j])
            printf("%d",arr[i]); } } }
	return 0; }