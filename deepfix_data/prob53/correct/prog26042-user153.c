#include<stdio.h>
long int ans;
void diff(int numbers[],int n,int i) {
    if(i==n) {
        return; }
    ans=ans-numbers[i];
    diff(numbers,n,i+1); }
int main() {
    long int n;
    scanf("%d",&n);
    long int numbers[n];
    ans=numbers[0];
    int i=0;
    for(i;i<=n-1;i++) {
        scanf("%d",&numbers[i]); }
    i=0;
    for(i;i<=n-1;i++) {
        printf("%d \n",numbers[i]); }
    printf("%ld",ans);
    return 0; }