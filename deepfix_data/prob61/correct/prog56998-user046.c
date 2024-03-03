#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int *a=(int*)malloc(n*sizeof(int));
    int *c=(int*)calloc((k+1),sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d",*(a));
        *(c+*a)+=1;
        a++; } }