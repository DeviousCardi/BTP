#include <stdio.h>
int f(long long int a[],long long int sum,long long int c,int count,int n){
    if(sum==c)return 1;
    if(count>=n)return 0;
    else{
        sum+=a[count];
        return f(a,sum,c,count+1,n)||f(a,sum-a[count],c,count+1,n); } }
int main() {
    int n;
    scanf("%d",&n,&s);
    long long int a[50],s;
    for(i=0;i<=n-1;i++){
        scanf("%lld",&a[i]); }
    j=f(a,0,s,0,n);
    if(j==1)printf("YES");
    else printf("NO");
    return 0; }