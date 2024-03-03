#include <stdio.h>
int sum(int c[],int index,int size,int sumA,int sumB) {
    if(index==N) {
        if((sumA==7)||(sumB==7)) {
            return 1; }
        else {
            return 0; } }
    return sum(c[],index+1,size,sumA+c[index],sumB)||sum(c[],index+1,size,sumA,sumB+c[index]) }
int main() {
    int n,s,i,sum;
    scanf("%d%d\n",&n,&s);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sum =sum(a,0,n,0,0);
    if(sum==0) {
        printf("NO"); }
    else {
        printf("YES"); }
    return 0; }