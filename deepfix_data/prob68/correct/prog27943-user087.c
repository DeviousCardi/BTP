#include<stdio.h>
int a[100]={0};
 product(int i) {
    if(i==0)
    return a[0];
    else
    return (a[i]*product(i-1)); }
int main() {
    int n;int i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
      int result=0;
    result=product(n-1);
    printf("%d",result);
    printf("%d",10000);
    return 0; }