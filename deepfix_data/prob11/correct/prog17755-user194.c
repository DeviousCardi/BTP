#include <stdio.h>
int sum(long int a[],int n,long int S) {
    int res=0;
    if(n==0)
        return 0;
    if(res==S)
        return 1;
    else {
        res=res+a[n-1];
        return sum(a,n-1,S); } }
int main() {
    long int S,a[30];
    int n,i,x=0;
    scanf("%d",&n);
    scanf("%ld",&S);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    x=sum(a,n,S);
   if(x==1)
        printf("YES");
    else if(x==0)
        printf("NO");
    return 0; }