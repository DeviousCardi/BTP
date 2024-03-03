#include <stdio.h>
int main() {
int n1 ,i, n2;
int t=0;
int count=0;
scanf("%d",&n1);
int a1[n1];
for( i=0;i<n1;i++)
scanf("%d",&a1[i]);
scanf("%d",&n2);
int a2[n2];
for( i=0;i<n2;i++)
scanf("%d",&a2[i]);
for( i=0;i<n1;i++)
{for( int j=0;j<n2;i++)
if(a1[i]==a2[j]) {
    if (j>t)
count++;
t=j;} }
if (count==n2)
printf("YES");
else
printf("NO");
return 0; }