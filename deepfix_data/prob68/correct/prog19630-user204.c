#include<stdio.h>
long long prdct(int N) {
    float num;
    scanf("%f",&num);
    if(N==1) {
        return num; }
    else
        return num*prdct(N-1); }
int main() {
    int N;
    scanf("%d",&N);
    printf("%.lld",prdct(N));
    return 0; }