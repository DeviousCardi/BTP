#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[10000],n,i,s,j;
    scanf("%d\n",n);
    for(i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    scanf("%d",&s);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]+arr[j]==s)
            printf("(%d,%d)",arr[i],arr[j]) } }
	return 0; }