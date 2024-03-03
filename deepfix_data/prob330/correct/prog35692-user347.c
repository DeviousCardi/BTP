#include <stdio.h>
int main() {
int n,a[n],i,j,count;
scanf("%d",&n);
while(n<3||n>100) {
    scanf("%d",&n); }
for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
for(j=1;j<n-1;j++) {
    if((a[j-1]<a[j])&&(a[j]>a[j+1]))
    count=count+1; }
    return 0; }