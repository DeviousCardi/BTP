#include<stdio.h>
int main() {
    int N=0;
    scanf("%d",&N);
    int a[N];
    for(int j=0;j<N;j++) {
        scanf("%d",&a[j]); }
    int find_sum(int);
    int result=find_sum(N);
    printf("%d",&result);
    return 0; }
int find_sum(int N) {
    if(N==0){return a[0];}
    else {
        return find_sum(N-1)+a[N]; } }