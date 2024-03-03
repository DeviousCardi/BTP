#include <stdio.h>
int sum(long int a[],int n,long int S,long int res) {
    if(res==S)
        return 1;
      if(n==0)
        return 0;
    else {
        return (sum(a,n-1,S,res)||sum(a,n-1,S,res+a[n-1])); } }
int main() {
    long int S,a[30],res=0;
    int n,i,x;
    scanf("%d",&n);
    scanf("%ld",&S);
    for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    x=sum(a,n,S,res);
   if(x==1)
        printf("YES");
    else if(x==0)
        printf("NO");
    return 0; }