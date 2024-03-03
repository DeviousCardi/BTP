#include <stdio.h>
#include <stdlib.h>
int main() {
char a[20];
int i,n;
scanf("%d",&n);
for(i=0;i<=n-1;i=i+1)
    scanf("%d",&a[i]);
for(i=0;i<=n-1;i=i+1) {
    if(a[0]>a[1]||a[n-1]>a[n-2])
    {printf("yes");
    break; }
    if(a[i]>a[i-1]&&a[i]<a[i+1])
    {printf("yes");
    break; } }
if(i==n-1) {
    printf("No"); }
return 0; }