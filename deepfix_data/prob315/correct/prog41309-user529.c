#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,j,count;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<N;i++)
    {   count=0;
        for(j=i+1;j<N;j++) {
            if(arr[i]>arr[j])
                count++; }
        printf("%d ",count); }
	return 0; }