#include<stdio.h>
int multiply(int m,int n) {
    if(n==1) return m;
    if(n<1) return 0;
    else return m+multiply(m,n-1); }
int main() {
    int N;
    int i=0;
    scanf("%d\n",&N);
    int num[N];
    for(i=0;i<N;i++)
        scanf("%d ",&num[i]);
    int multi=1;
    if(N%2==0) {
        while(i<N) {
            multi=multi*multiply(num[i],num[i+1]);
            i=i+2;
            printf("%d ",multi); } }
    printf("%d ",multi);
    return 0; }