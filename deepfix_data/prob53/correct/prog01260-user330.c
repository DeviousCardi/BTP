#include<stdio.h>
int diff(long int a[],long int count){
    long int dif=a[0];
    if(count==1)return dif;
    return -(a[count]-diff(a,count-1)); }
int main() {
    long int n,x,i;
    scanf("%ld",&n);
    long int a[100000];
    for(i=0;i<=n-1;i++){
        scanf("%ld",&a[i]); }
    x=diff(a,n);
    printf("%ld",x);
    return 0; }