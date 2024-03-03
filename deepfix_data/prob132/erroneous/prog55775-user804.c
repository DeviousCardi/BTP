#include <stdio.h>
int main() {
    int n,i,count=0;
   scanf("%d",&n);
   int a[100];
   for (i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
             c=a[i];
             if(c==a[j])
             count+=1; } }
   if (c==a[j])
   printf("Yes");
   else
   printf("No");
    return 0; }