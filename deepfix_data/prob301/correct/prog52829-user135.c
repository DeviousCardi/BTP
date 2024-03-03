#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    int arr[n];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  scanf("%d",&arr[i]);
    if(i==1){
        printf("%d",arr[i]); }
          else {
          for(j=1;j<=n-1;j++) {
            scanf("%d",&arr[j]);
            if(arr[i]!=arr[j]) {
                break; }
            else printf("%d",arr[i]); } } }
	return 0; }