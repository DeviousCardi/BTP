#include <stdio.h>
int main() {
     int i,n,count=0,j;
     int num=0;
     int s=0;
     char comma[n-1];
     scanf("%d",&n);
     int a[n];
     for(i=1;i<2*n;i++) {
        count=0;
        num=0;
        scanf("%d%c",&a[i],&comma[i]);
        num=a[i];
        printf("me");
      for(j=2*n;j>=1;j--) {
           if(a[j]==num)
           count=count+1;
           printf("g"); }
           if(count==num)
            s=s+1; }
            if (s==n)
            printf("Yes");
            else
           printf("No");
       return 0; }