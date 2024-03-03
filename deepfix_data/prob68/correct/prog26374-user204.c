#include<stdio.h>
long double prdct(int N) {
    int num;
    scanf("%d",&num);
    if(N==1) {
        return num; }
    else
        return num*prdct(N-1); }
int main() {
    int N;
    scanf("%d",&N);
    printf("%d",prdct(N));
    return 0; }