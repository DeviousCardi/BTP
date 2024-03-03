#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[1000];
    int n;
    scanf("%d",&n);
    int i,j;
    int sum;
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    scanf("%d",&sum);
    for (i=0;i<n;i++)
    {   for (j=i+1;j<n;j++) {
            if (arr[j]==sum-arr[i])
                printf("(%d,%d)\n",arr[i],arr[j]); } }
	return 0; }