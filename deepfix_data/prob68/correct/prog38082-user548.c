#include<stdio.h>
int product (int a[],int start, int end) {
    printf("hello"); }
int main() {
    long int N;
    scanf("%ld",&N);
    int i,a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    printf("%d",product(a,0,N));
    return 0; }