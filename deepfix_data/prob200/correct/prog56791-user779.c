#include <stdio.h>
int a[100];
int n,i,k,min=0;
int getMaxLessThan(int upperLimit) {
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        if(a[i]<a[i+1])
        min=a[i];
        else min=a[i+1]; }
    return min; }
int main() {
  getMaxLessThan(11);
  printf("%d",min);
    return 0; }