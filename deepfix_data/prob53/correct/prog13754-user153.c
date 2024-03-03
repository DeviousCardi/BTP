#include<stdio.h>
long int ans=0;
void diff(long int numbers[],long int n,int i)
{   if(i==0) {
    ans=numbers[0];
    diff(numbers,n,i+1); }
    if(i==n) {
        return; }
    ans=ans-numbers[i];
    printf("%ld\n",ans);
    diff(numbers,n,i+1); }
int main() {
    long int n;
    scanf("%d",&n);
    long int numbers[n];
   long int ans=numbers[0];
    int i=0;
    for(i;i<=n-1;i++) {
        scanf("%ld",&numbers[i]); }
    i=0;
    diff(numbers,n,0);
    printf("%ld",ans);
    return 0; }