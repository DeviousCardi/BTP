#include <stdio.h>
int es(int a[],int n,int suma,int sumb,int i) {
    if(suma==sumb)
    return 1;
    if(suma!=sumb&& i==n)
    return 0;
    return es(a,n,suma+a[i],sumb,i+1)||es(a,n,suma,sumb+a[i],i+1); }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(es(a,n,0,0,0))
    printf("YES");
    else
    printf("NO");
    return 0; }