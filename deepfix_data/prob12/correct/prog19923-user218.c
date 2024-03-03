#include <stdio.h>
int main(){
    int n,i,j,k,d,m;
    int a[200];
    scanf("%d",&n);
    for(i=0;i<(2*n);i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<(2*n);i++) {
        if(a[0]==a[i]) {
            d=i; } }
    for(i=1;i<(2*n);i++) {
      for(j=i+1;j<(2*n);j++) {
          if(a[i]==a[j]) {
              k=j-i;
              if(k<d) {
                  m=k; }
              else {
                  m=d; } } } }
    printf("%d",m);
    return 0; }