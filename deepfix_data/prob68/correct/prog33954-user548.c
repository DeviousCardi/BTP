#include<stdio.h>
int product (int a[],int start, int end) {
    int prod=a[start];
    if(start<=end) {
        return(prod*product(a,start+1,end)); } }
int main() {
    long int N;
    scanf("%d",&N);
    int i,a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    printf("%d",product(a,0,N));
    return 0; }