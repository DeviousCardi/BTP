#include <stdio.h>
#define max size 10000
int main() {
    int i,j,n,t;
    int array[10000];
    scanf("%d",&n);
    for(i=0;i<=n;i++) {
        scanf("%d" ,&array[i]); }
    for(i=0;i<=n;i++) {
        printf("%d" ,array[i]); }
    for(i=0;i<=n;i++);
   { for(j=0;j<=(n-i-1);j++) {
        if (array[j]>array[j+1]) {
            t=array[j];
            array[j]=array[j+1];
            array[j+1]=t; } } }
    return 0; }