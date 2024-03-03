#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,m,i,j,count=0;
    scanf("%d",&n);
    int arr[N];
    for(i=0;i<N;i++) {
        scanf("%d",&m); }
    for(i=0;i<N;i++) {
        for(j=i+1;j<N;j++) {
            if(arr[i]>arr[j])
            count=count+1;
            printf("%d ",count); } }
	return 0; }