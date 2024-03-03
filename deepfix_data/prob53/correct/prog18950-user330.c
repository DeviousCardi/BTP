#include<stdio.h>
long int diff(long long int a[],long int count){
    long long int dif=a[0];
    if(count==1)return dif;
    return -(a[count-1]-diff(a,count-1)); }
int main() {
    long int n,x,i;
    scanf("%ld",&n);
    long long int a[100000];
    for(i=0;i<=n-1;i++){
        scanf("%lld",&a[i]); }
    x=diff(a,n);
    printf("%ld",x);
    return 0; }