#include <stdio.h>
    int n;
    int arr[30];
     int sum=0;
int check(int sum1,int l,int sum2) {
    if(l!=0&&(sum1==sum2))
    return 1;
    for(;l<n-1;l++) {
        sum1=sum1+arr[l];
        sum2=sum-sum1;
        if(check(sum1,l+1,sum2))
        return 1;
        sum1=sum1+arr[l];
        sum2=sum-sum1; }
    return 0; }
int main() {
    int i;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    sum=sum+arr[i];
    printf("%s",check(0,0,0)?"YES":"NO");
    return 0; }