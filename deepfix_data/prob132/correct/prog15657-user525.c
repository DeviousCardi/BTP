#include <stdio.h>
int main() {
    int i,j,n,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d,",&a[i]);
    for(i=0;i<n;i++) {
     count=0;
     for(j=0;j<n;j++) {
         if(a[i]==a[j])
         count++; }
     if(a[i]!=count) {
         printf("No");
         break; } }
    if(i==n)
    printf("Yes");
    return 0; }