#include<stdio.h>
int product (int a[],int start, int end) {
    if(start==end-1)
    return(a[start]);
    if(start<end-1) {
        return(a[start]*product(a,start+1,end)); } }
int main() {
    long int N;
    scanf("%ld",&N);
    int i,a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    printf("%d",product(a,0,N));
    return 0; }