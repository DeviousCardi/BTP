#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,m,i,j,sum=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&m);
        arr[i]=m; }
    for(i=0;i<N;i++) {
        int count=0;
        for(j=i+1;j<N;j++) {
            if(arr[i]>arr[j])
            count=count+1; }
        printf("%d ",count);
        sum=sum+count; }
    printf("sum");
	return 0; }