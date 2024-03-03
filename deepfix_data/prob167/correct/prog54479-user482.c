#include<stdio.h>
int main() {
    int N=0;
    scanf("%d",&N);
    int a[N];
    for(int j=0;j<N;j++) {
        scanf("%d",&a[j]); }
    int find_sum(int,int*);
    int result=find_sum(N-1,a);
    printf("%d",&result);
    return 0; }
int find_sum(int n,int*a) {
    if(n==0){return *a;}
    else {
        return find_sum(n-1,a)+*(a+n); } }