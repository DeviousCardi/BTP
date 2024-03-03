#include <stdio.h>
int main(){
int n,a[200],i,j,value,count=0;
scanf("%d",&n);
for(i=0;i<=(2*n-1);i++) {
    scanf("%d",&a[i]);
    value=a[i];
    for(j=0;j<=(2*n-1);j++) { {
    if (value==a[j]&&i==j) continue;
    count++ ; } } }
 printf("%d",count);
return 0; }