#include<stdio.h>
int diff(int a[],int n) {
if(n==2) {
     return a[0]-a[1]; }
return dia[n-1]; }
int main() {
    int n=3;
    int a[3]={1,2,3}
    int r=diff(a,n);
    printf("%d",r);
    return 0; }