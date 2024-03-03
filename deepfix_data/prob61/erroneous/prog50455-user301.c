#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,k,i,j;
    int *arrinput,*count,*arroutput;
    scanf("%d %d",&n,&k);
    arrinput=(int *)malloc(n*sizeof(int));
    arroutput=(int *)malloc(n*sizeof(int));
    count=(int *)calloc(k*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    return 0; }