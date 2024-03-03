#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c,i,array[n];
    for (i=0;i<n;i++)
    scanf("%d",&array[i]);
    for (i=1;i<n-1;i++) {
        c==((array[i]>array[i-1])&&(array[i]<array[i+1])); }
    printf("%d",c);
    return 0; }