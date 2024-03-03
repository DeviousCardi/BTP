#include <stdio.h>
int a=0,b=0;
int i=0;
int sum(ar[],a,b,i,n,k) {
    if(i>n) return 0;
    if(a==k) return 1;
    if(b==k) return 1;
 return (sum(ar,a+c[i],b,i+1,n,k)||sum(ar,a,b+c[i],i+1,n,k)); }
int main() {
    double n[30],l,m,j,k;
    scanf("%d",&a);
    scanf("%d",&b);
    for(j=0;j<30;j++) {
        scanf("%d",&a[j]);
        k=j; }
    if((sum(n,a,b,k,l)||sum(n,a,b,k,m)==1)
    printf("YES");
    else
    printf("NO");
    return 0; }