#include <stdio.h>
#include<math.h>
int main() {
    int a[400],n,i,j,k,temp=0,max,p=0,q=-1;
    scanf("%d",&n);
    max=2*n-1;
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<2*n;j++) {
        for(k=0;k<2*n;k++) {
           if(j!=k) {
               p=a[j];
               q=a[k];
               if(p==q) {
                   temp=abs(j-k);
                   if(temp<max)
                    max=temp; } } } }
    printf("%d",max);
    return 0; }