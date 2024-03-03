#include<stdio.h>
int prod(int a[],int size){
    prod(a,1)==a[0];
    if(size>1) {
        int c;
        int i;
        for(i=1;i<size;i++) {
            c=a[size-i]*prod(a,size-(i+1)); }
        printf("%d\n",c);
        return c; }
    return 0; }
int main() {
    int N,i;
    scanf("%d\n",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d ",&a[i]); }
    prod(a,N);
    return 0; }