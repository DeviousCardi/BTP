#include <stdio.h>
int main(){
int n,a[400],min,b=400;
scanf("%d",&n);
for(int i=0;i<=(2*n-1);i++) {
    scanf("%d",&a[i]); }
 for(int i=0;i<2*n;i++) {
  for(int j=i+1;j<2*n;j++) {
    if(a[i]==a[j]&&i!=j) {
         min=(j-i);
        if (min<b) {
            b=min; } } } }
     printf("%d",b);
return 0; }