#include<stdio.h>
 a[100]={0};
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
     long int result=0;
    result=product(n-1);
    printf("%d",result);
    return 0; }