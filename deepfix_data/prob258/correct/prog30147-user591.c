#include <stdio.h>
#include <stdlib.h>
int main() {
char a[20];
int i,n;
scanf("%d",&n);
for(i=0;i<=n-1;i=i+1)
    scanf("%c",&a[i]);
for(i=1;i<n-1;i=i+1) {
    if(a[i]>a[i-1]&&a[i]>a[i+1])
    {printf("Yes");
    break; } }
if(i==n-2) {
    printf("No"); }
return 0; }