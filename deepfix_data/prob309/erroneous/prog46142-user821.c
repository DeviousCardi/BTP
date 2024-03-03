#include <stdio.h>
int main() {
     int i,n,count=0,j;
     int num=0;
     int s=0;
     char comma[n]
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++) {
        count=0;
        num=0;
        scanf("%d%c",&a[i],&comma[i]);
        num=a[i];
        for(j=n-1;j>=0;j--) {
           if(a[j]==num)
           count=count+1; }
         if(count==num)
         s=s+1; }
         if(s==n)
          printf("Yes");
          else
          printf("No");
       return 0; }