#include<stdio.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return ((float)2*(2*n-1)/(n+1))*catalan(n-1); }
int main(){
    int i,p,n;
    scanf("%d",&n);
    int a[n-1];
    for(i=0;i<n;i++) {
        scanf("%d\n",&a[i]); }
    for(i=0;i<n;i++) {
        p=catalan(a[i]);
        printf("%d\n",p); }
return 0; }