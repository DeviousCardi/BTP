#include <stdio.h>
int main() {
    int n,i,k,j;
    int c[2];
    scanf("%d",&n);
    int h[n],b[3*n];
    for(i=0;i<n;i++)
    {   scanf("%d",&h[i]); }
    b[0]=1;
    int temp=h[0];
    for(i=1;i<3*n;i++)
    {   b[i]=temp;
        temp=h[temp-1]; }
    for (i=0,k=0;(i<2*n)&&(k<2);i++)
    {   for(j=i+1;(j<2*n)&&(k<2);j++)
        {   if (b[i]==b[j])
            {  c[k]=j;
               k=k+1; } } }
    printf("%d %d",c[0],(c[1]-c[0]));
    return 0; }