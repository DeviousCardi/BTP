#include <stdio.h>
int sums(int a[],int n,sum,sum1);
int main() {
   int n a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sums(a,n,0,0);
    return 0; }
int sums(int a[],int n,sum,sum1) {
    if(n<0){
    printf("NO");return 0;}
    if(sum==sum1){
    printf("YES");return 0;}
    else{
        return sums(a,n,sum+a[n-1],sum1)||return sums(a,n,sum,sum1+a[n-1])||return sums(a,n,sum,sum1)||return sums(a,n,sum,sum1); } }