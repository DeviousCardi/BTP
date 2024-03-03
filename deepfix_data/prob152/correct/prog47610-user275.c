#include <stdio.h>
int foo(int a[],int n,int sum){
    if(sum==0)return 1;
    if(n==0)return 0;
    return foo(a,n-1,sum)||foo(a,n-1,sum-a[n-1]); }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i]; }
    if(sum%2==1)printf("NO");
    else{
        sum=sum/2;
        if(foo(a,n,sum)==0)printf("YES");
        else printf("NO"); }
    return 0; }