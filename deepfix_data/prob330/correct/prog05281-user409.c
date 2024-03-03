#include <stdio.h>
int main(){
     int n;
     int i;
     scanf("%d\n",&n);
     int a[n];
     if(n>=3&&n<=10){
          for(i=0;i<n;i=i+1) {
               scanf("%d",&a[i]);
            }}
      i=0;
     while(i>=2&&i<=99){
     if(a[i]<a[i+1]&&a[i]>a[i-1]) {
        printf("%d",i-1); }
         i=i+1; }
    return 0; }