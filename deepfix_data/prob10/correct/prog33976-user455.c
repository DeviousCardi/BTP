#include<stdio.h>
int main() {
    int n,d=0,i;
    scanf("%d\n",n);
    int c[n];
    for(i=0;i<n;i++)
    {scanf("%d",&c[i]);}
    for(i=0;i<n-1;i++) {
        if(c[i+1]>=c[i])
        d=d+1;
        else
        continue; }
    printf("%d",d);
    return 0; }