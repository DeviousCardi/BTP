#include<stdio.h>
int main() {
    long int n;
    scanf("%d",&n);
    long int num[n];
    for(int i=n-1;i>=0;i--) {
        scanf("%d",&num[i]);
        if(i!=(n-1)) {
        num[i]=(-1)*num[i]; } }
    for(int i=n-1;i>=0;i--) {
        printf("%d\n",num[i]); }
    long int s;
    return 0; }