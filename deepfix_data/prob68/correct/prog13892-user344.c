#include<stdio.h>
int product=1;
int prd(int n[], int N, int index){
    product=product*n[index];
    if(index==N) return product;
    return prd(n, N, index+1); }
int main() {
    long int N, i;
    scanf("%ld\n", &N);
    int n[N];
    for(i=0; i<N; i++){
        scanf("%d", &n[i]); }
    int prod=prd(n[N], N, 0);
    printf("%d", prod);
    return 0; }