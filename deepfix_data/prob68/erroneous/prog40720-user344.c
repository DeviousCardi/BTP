#include<stdio.h>
int prd(int n[], int N, int index,int product){
    if(index==N) return product;
    return prd(n, N, index+1, product*n[index]); }
int main() {
    long int N, i;
    scanf("%d\n", &N);
    int n[N];
    for(i=0; i<N; i++){
        scanf("%d", &n[i]); }
    int prod=prd(n[], N, 0, 1);
    printf("%d", prod);
    return 0; }