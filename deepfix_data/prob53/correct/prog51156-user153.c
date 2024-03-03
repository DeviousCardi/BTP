#include<stdio.h>
long int ans;
void diff(int numbers[],int n,int i) {
    if(i==n-1)
    {   ans=ans-numbers[i];
        return; }
    else
    { ans=ans-numbers[i];
    printf("%ld",ans);
      diff(numbers,n,i+1); } }
int main() {
    long int n;
    scanf("%d",&n);
    long int numbers[n];
    ans=numbers[0];
    int i=0;
    for(i;i<=n-1;i++) {
        scanf("%d",&numbers[i]); }
    diff(numbers,n,0);
    printf("%ld",ans);
    return 0; }