#include <stdio.h>
int main() {
     int i,n,count=0,j;
     int num=0;
     int counter=0;
    scanf("%d",&n);
    int a[n];
     for(i=0;i<n;i++) {
        num=0;
        scanf("%d,",&a[i]);
        num==a[i];
        for(j=n;j>0;j--) {
           if(a[j]==num)
            count=count+1; }
         if(count==i)
         counter=counter+1; }
         if(counter==n)
          printf("Yes");
          else
          printf("No");
   return 0; }