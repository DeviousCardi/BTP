#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    int arr[n];
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {  scanf("%d",&arr[i]);
           for(j=0;j<=n-2;j++) {
            scanf("%d",&arr[i-j]);
            if(arr[i]!=arr[i-j]) {
                break; }
            else printf("%d",arr[i]); } }
	return 0; }