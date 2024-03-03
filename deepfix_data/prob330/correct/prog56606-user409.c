#include <stdio.h>
int main(){
     int n;
     int i;
     int a[n-1];
     scanf("%d",&n);
     for(i=0;i<n&&n>=3&&n<=100;i=i+1) {
        scanf("%d/n",&n);
        scanf("%d",&a[i]); }
      i=0;
     while(i>=2&&i<=99){
     if(a[i]<a[i+1]&&a[i]>a[i-1]) {
        printf("%d",a[i]); }
         i=i+1; }
    return 0; }