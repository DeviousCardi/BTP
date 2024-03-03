#include<stdio.h>
#include<strings.h>
void rev(int a[],int N) {
    if(N==1) {
        printf("%d",a[0]);
        return; }
    printf("%ld ",a[N-1]);
    return rev(a,N-1); }
int main() {
    long int N,i;
    scanf("%ld",&N);
    long int a[N];
    for(i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    rev(a,N);
    return 0; }