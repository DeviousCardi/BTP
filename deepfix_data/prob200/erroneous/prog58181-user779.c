#include <stdio.h>
int a[100];
int n,i,k,min=0;
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
int getMaxLessThan(int upperLimit) {
    for(i=0;i<n;i++){
        if(a[i]<a[i+1])
        min=a[i];
        else min=a[i+1]; } }
int main() {
    scanf("%d",&n);
scanf("%d",&k);
  getMaxLessThan(50);
    return 0; }