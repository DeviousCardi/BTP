#include<stdio.h>
int p=1;
int product(int N) {
    unsigned long int n=0,a;
    if(n<N) {
    scanf("%d",&a);
    return a*product(N-1); } }
int main() {
    int N;
    scanf("%d",&N);
    printf("%ld",product(N));
    return 0; }