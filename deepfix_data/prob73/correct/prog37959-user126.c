#include <stdio.h>
int main() {
    int i,n,m,a,sum,b,c;
    scanf("%d%d",&n,&m);
    int array[n];
    for(a=0;a<n;a++)
    {   sum=0;
        for(i=0;i<m;i++) {
            scanf("%d",&b);
            sum=sum+b; }
        array[a]=sum; }
    for(c=0;c<n;c++) {
        if(array[c+1]>array[c])
        array[c]=array[c+1];
        else
        array[c+1]=array[c]; }
    printf("%d",&array[n]);
    return 0; }