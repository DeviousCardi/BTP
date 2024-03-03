#include<stdio.h>
long int x=0;
long int y;
long int difrnc(long int a[],long int x,long int n){
    if(x==n-1) return y;
    if(x==0){y=a[0];}
    y=y-a[x+1];
    return difrnc(a,x+1,n); }
int main() {
    long int n,i;
    long int j=0;
    scanf("%ld\n",&n);
    long int a[100000];
    for(i=0;i<n;i++)
    scanf("%ld ",&a[i]);
    long int result=difrnc(a,j,n);
    printf("%ld",result);
    return 0; }