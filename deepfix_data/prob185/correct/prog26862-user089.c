#include <stdio.h>
int a=0,b=0;
int i=0;
int sum(long int ar[],int a,int b,int i,int n,int k) {
    if(i>n) return 0;
    if(a==k) return 1;
    if(b==k) return 1;
 return (sum(ar,a+ar[i],b,i+1,n,k)||sum(ar,a,b+ar[i],i+1,n,k)); }
int main() {
    long int n[30],l,m,j,k;
    scanf("%d",&a);
    scanf("%d",&b);
    for(j=0;j<30;j++) {
        scanf("%ld",&n[j]);
        k=j; }
    if((sum(n,a,b,i,k,l)||sum(n,a,b,i,k,m))==1)
    printf("YES");
    else
    printf("NO");
    return 0; }