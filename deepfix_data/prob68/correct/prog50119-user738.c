#include<stdio.h>
int p=1;
 signed long  int  product(int N) {
     long int n=0,a;
    if(n<N) {
    scanf("%ld",&a);
    return a*product(N-1); } }
int main() {
    int N;
    scanf("%d",&N);
    printf("%ld",product(N));
    return 0; }