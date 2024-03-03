#include <stdio.h>
int main()
{int n,a[1000],i,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++) {
    c=0;
    for(j=0;j<n;j++) {
    if((i+1)==a[j]) c++; }
    if(c>1) printf("%d",i+1); }
    return 0; }