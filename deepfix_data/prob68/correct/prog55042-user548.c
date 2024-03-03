#include<stdio.h>
int product (long int a[],long int start,long int end) {
    if(start==end-1)
    return(a[start]);
    if(start<end-1) {
        return(a[start]*product(a,start+1,end)); } }
int main() {
    long int N;
    scanf("%ld",&N);
    long int i,a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    printf("%ld",product(a,0,N));
    return 0; }