#include <stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int c=0,i,array[n];
    for (i=0;i<n;i++)
   { scanf("%d",&array[i]);}
    for (i=1;i<n-1;i++) {
        if ((array[i]>array[i-1])&&(array[i]<array[i+1]))
        {c=c+1;} }
    printf("%d",c);
    return 0; }