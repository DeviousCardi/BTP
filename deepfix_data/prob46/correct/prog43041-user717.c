#include <stdio.h>
int main() {
    int i;
 int n,m,count=0;
 scanf("%d",&m);
 scanf("%d",&n);
 for(i=2;i<n;i++) {
   if(n%i==0)
   count++; }
 if(count==m)
 printf("YES");
 else
 printf("NO");
 return 0; }