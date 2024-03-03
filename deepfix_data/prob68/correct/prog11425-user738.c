#include<stdio.h>
int p=1;
int product(int N) {
    int n=0,a;
    if(n<N) {
    scanf("%d",&a);
    return a*product(N-1); } }
int main() {
    int N;
    scanf("%d",&N);
    printf("%d",product(N));
    return 0; }