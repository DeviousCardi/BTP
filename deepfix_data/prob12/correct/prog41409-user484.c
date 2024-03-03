#include <stdio.h>
int main(){
int n,a[400],i,j,min,b=400;
scanf("%d",&n);
for(i=0;i<=(2*n-1);i++) {
    scanf("%d",&a[i]); }
 for(i=0;i<2*n;i++) {
  for(j=i;i<2*n;i++) {
    if(a[i]==a[j]&&i!=j) {
         min=(j-i);
        if (min<b)
        { b=min;
        printf("%d",b); } } } }
return 0; }