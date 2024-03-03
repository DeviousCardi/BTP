#include <stdio.h>
int main() {
     int i,n,count=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]);
        for(j=n;j>0;j--) {
            if(a[i]==a[j])
            count=count+1; } }
          if(count==i)
          printf("Yes");
          else
          printf("No");
   return 0; }