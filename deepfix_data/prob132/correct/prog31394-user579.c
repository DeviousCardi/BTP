#include <stdio.h>
int main()
{int i,n,j;
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++)
scanf("%d,",&a[i]);
for(i=0;i<n;i++)
{ b[a[i]]=0;
    for(j=0;j<n;j++) {
        if(a[i]==a[j])
        {b[a[i]]++; } } }
for(i=0;i<n;i++)
printf("\n%d",b[a[i]]);
for(i=0;i<n;i++) {
    if(b[a[i]]!=a[i])
    {printf("No");
    return 0; } }
printf("Yes");
    return 0; }