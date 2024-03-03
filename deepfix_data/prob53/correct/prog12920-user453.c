#include<stdio.h>
int diff(int a[],int n) {
if(n==2) {
     return a[0]-a[1]; }
return diff(a,n-1)-a[n-1]; }
int main() {
    int n;
    scanf("%d",&n);
    if(n>=2&&n<=(100000)) {
        int i;
        int a[n];
        for(i=0;i<n;i++) {
            scanf("%d ",&a[i]);
            if(a[i]<-pow(10,9)&&a[i]>pow(10,9))
            return 0; }
        int r=diff(a,n);
        printf("%d",r); }
    return 0; }