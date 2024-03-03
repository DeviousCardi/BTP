#include<stdio.h>
int main() {
    long int n;
    scanf("%lf",&n);
    long int num[n];
    for(int i=n-1;i>=0;i--) {
        scanf("%d",&num[i]);
        if(i!=(n-1)) {
        scanf("%d",&num[i]);
        num[i]=(-1)*num[i]; } }
    for(int i=n-1;i>=0;i--) {
        printf("%d",num[i]); }
    long int s;
    return 0; }