#include<stdio.h>
int difference(int num[],int n) {
    long int static sum=0;
    sum=sum+num[n-1];
    printf("%d\n",sum);
    if(n==1) {
    return sum; }
    difference(num,n-1); }
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
     int s;
    s=difference(num,n);
    printf("%d",s);
    return 0; }