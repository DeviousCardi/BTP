#include <stdio.h>
  int a[100]={0};
    int n;
    int k;
int getMaxLessThan(int upperLimit) {
    upperLimit=0;
    for(int i=0;i<n;i++) {
        if(a[i]>upperLimit) {
            upperLimit=a[i]; } }
    return upperLimit; }
int main() {
     scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
  int p,s=0;
   for(int i=1;i<=k;i++) {
    p=getMaxLessThan(s);
    printf("%d\n",p); }
    return 0; }