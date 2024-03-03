#include <stdio.h>
int main()
{int a[1000],n,i,j,c=0,d=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++) {
    for(j=i;j<n;j++) {
        if(a[i]==a[j])
        c++; }
    if(c!=a[i]){d++;
    printf("No"); break; }
if(d>0)printf("Yes");
    return 0; }