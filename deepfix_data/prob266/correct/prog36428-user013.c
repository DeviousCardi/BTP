#include <stdio.h>
int main(){
      int i,a[4];
      for(i=0;i<4;i++) {
          scanf("%d",&a[i]); }
      int sum=0;
      sum=a[0]+a[1]+a[2]+a[3];
      if(a[4]%sum==0) {
          printf("%d",a[4]); }
      else {
       printf("%d",((a[4]/sum)*sum)+sum); }
    return 0; }