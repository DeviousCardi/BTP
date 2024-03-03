#include <stdio.h>
int main() {
   int n,x;
   scanf("%d",&n);
   int a[n];
   a[0]=1
   for(int i=1;i<n;i++)
    scanf("%d",&a[i]);
int count=0,i=1;
   while(i>=1) {
      a[i]=x;
      count=count+1;
      int j=count;
      if(count>1) {
         for(j=1;j<count;j++) {
             if(a[j]==x)
             break; } }
    if(j<count)
    printf("%d %d"count,(count-j));
      break;
    i=x; }
    return 0; }