#include <stdio.h>
int sum(int c[],int index,int size,int sumA,int sumB) {
    if(index==size) {
        if((sumA==7)||(sumB==7)) {
            return 1; }
        else {
            return 0; } }
    return sum(c,index+1,size,sumA+c[index],sumB)||sum(c,index+1,size,sumA,sumB+c[index]); }
int main() {
    int n,s,i,sum1;
    scanf("%d%d\n",&n,&s);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sum1 =sum(a,0,n,0,0);
    if(sum1==0) {
        printf("NO"); }
    else {
        printf("YES"); }
    return 0; }