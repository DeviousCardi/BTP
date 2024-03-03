#include <stdio.h>
int main {
    int n,m,i;
    int count=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n-1;i++) {
        if(array[i+1]>array[i]&&array[i+1]>array[i+2])
        count=count+1; }
    printf("%d",count);
    return 0; }