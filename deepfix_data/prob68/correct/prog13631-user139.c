#include<stdio.h>
long int prod(int c[],int start,int size,long int product) {
    if(start==size) {
        return product; }
    return prod(c,start+1,size,product*c[start]); }
int main() {
    int i,n;
    long int result;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    result =prod(a,0,n,1);
    printf("%ld",result);
    return 0; }