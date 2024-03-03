#include <stdio.h>
int main() {
 int i,j,n,flag,b;
 b=0;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++) {
     flag=0;
     for(j=0;j<n;j++) {
         if(a[i]==a[j])
         ++flag; }
     if(flag!=a[i])
     b=1; }
 if(b==1)
 printf("No");
 else
 printf("Yes");
    return 0; }