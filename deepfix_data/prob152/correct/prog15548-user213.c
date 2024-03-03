#include <stdio.h>
int checksum(int s, int n, int i, int a[]) {
    if(s==0)
    return 1;
    if(i==n)
    return 0;
    return (checksum(s,n,i+1,a)||checksum(s-a[i],n,i+1,a)); }
int main() {
    int n,s;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    s+=a[i];
    if((s%2)!=0) {
        printf("NO");
        return 0; }
    int z=checksum(s/2,n,0,a);
    if(z==0)
    printf("NO");
    else
    printf("YES");
    return 0; }