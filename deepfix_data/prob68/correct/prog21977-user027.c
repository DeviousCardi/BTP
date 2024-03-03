#include<stdio.h>
int pro(int a[],int n) {
    if(n<0)
        return 0;
    return a[n-1]*pro(a,n-1); }
int main() {
    int N;
        scanf("%d",&N);
    int a[N];
        scanf("%d",a);
    while((N>=2)&&((*a>=-10000)&&(*a<=10000))) {
    int P;
         P=pro(a,N);
    printf("%d",P); }
    return 0; }