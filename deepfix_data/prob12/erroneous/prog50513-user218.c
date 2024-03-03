#include <stdio.h>
int main(){
    int n,i,j,k,l,m;
    int a[200];
    for(i=0;i<(2*n);i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<(2*n);i++) {
        if(a[0]==a[i])
         k=i;
      for(j=i+1;j<(2*n);j++) {
            if(a[i]==a[j]) {
                l=j-i;
                  if(l<k) {
                      m=l; } } }
    printf("%d",m);
    return 0; }