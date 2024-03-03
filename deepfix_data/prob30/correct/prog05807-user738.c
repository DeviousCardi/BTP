#include <stdio.h>
int arr[100]={0};
int n,i,k;
int getMaxLessThan(int upperLimit) {
      int temp,n,i,a;
      scanf("%d",&a);
      for(i=0;i<n-1;i++) {
          scanf("%d",&temp);
          if(temp>a)
          a=temp; }
      return a; }
int main() {
        int l;
         scanf("%d",&n);
         int s=getMaxLessThan(1);
         printf("%d",s);
    return 0; }