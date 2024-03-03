#include <stdio.h>
int main(){
    int n,m;
    int min=200;
    scanf("%d",&n);
    int a[2*n];
    for(int i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<2*n;i++) {
        for(int j=i+1;j<2*n;j++) {
         if(a[i]==a[j]) {
            m=j-i; } }
      if(min>m) {
          min=m; } }
   printf("%d",min);
    return 0; }