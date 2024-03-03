#include<stdio.h>
int a[100];
long int count=1;
int pro(int N) {
    count=(count*a[N-1]);
    if(N==1)
    return count;
    else
    return pro(N-1); }
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    long int c=pro(n);
    printf("%d",c); }