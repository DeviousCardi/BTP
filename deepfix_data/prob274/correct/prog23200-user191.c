#include <stdio.h>
int main() {
    int n,i,k=0,j;
    int c[2];
    c[0]=0;
    c[1]=0;
    scanf("%d",&n);
    int h[n],b[3*n];
    for(i=0;i<n;i++)
    {   scanf("%d",&h[i]); }
    int temp=h[0];
    for(i=0;i<3*n;i++)
    {   b[i]=temp;
        temp=h[temp]; }
    for (i=0;(i<3*n)&&(c[1]!=0);i++)
    {   for(j=i+1;(j<3*n)&&(c[1]!=0);j++)
        {   if (b[i]==b[j])
            {  c[k]=i;
               k=k+1; } } }
    printf("%d  %d",c[0],c[1]);
    return 0; }