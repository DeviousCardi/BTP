#include <stdio.h>
int main() {
    int n,b[100];
    scanf("%d",&n);
    int a[100],count=0,i,j;
    for(i=0;i<n;i++)
   { scanf("%d,",&a[i]);
   b[i]=0;}
    for(i=0;i<n;i++)
    {count=0;
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
            b[j]++; }
    }for(i=0;i<n;i++)
     printf("%d",a[i]);
    return 0; }