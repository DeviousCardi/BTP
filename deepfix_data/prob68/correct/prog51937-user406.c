#include<stdio.h>
int multiply(int m,int n) {
    if(n==1) return m;
    if(n==0) return 0;
    else if(n<0)return m+multiply(m,-n-1);
    else return m+multiply(m,n-1); }
int main() {
    int N;
    int i=0;
    int count=0;
    scanf("%d\n",&N);
     int num[N];
    for(i=0;i<N;i++)
        scanf("%d ",&num[i]);
    for(i=0;i<N;i++)
        if(num[i]<0)
            count=count+1;
    long int multi=1;
    if(N%2==0) {
        for(i=0;i<N-1;i=i+2) {
            multi=multi*multiply(num[i],num[i+1]); } }
    else {
        for(i=0;i<N-1;i=i+2) {
            multi=multi*multiply(num[i],num[i+1]); }
        multi=multiply(multi,num[N-1]); }
    if(count%2==0)
        printf("%ld ",multi);
    else
        printf("%ld ",multi*(-1));
    return 0; }