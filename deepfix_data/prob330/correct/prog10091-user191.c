#include <stdio.h>
int main() {
    int n,count=0,h[100],i,j,ch;
    scanf("%d",n);
    ch = getchar();
    while ( ch != EOF && count < 100) {
    h[i] = ch;
    i=i+1;
    ch=getchar();}
    for(j=1;j<n-1;j++)
    {   while(h[j]>h[(j+1)]&&h[j]>h[(j-1)])
         {  count++;} }
    printf("%d",count);
    return 0; }