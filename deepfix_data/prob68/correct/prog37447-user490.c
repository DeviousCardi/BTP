#include<stdio.h>
int a[100];
double count=1;
int pro(int N) {
    count=(count*a[N]);
    if(N==0)
    return count;
    else
    return pro(N-1); }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    double c=pro(n-1);
    printf("%lf",c); }