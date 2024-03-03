#include <stdio.h>
int checksum(int s, int n, int i, int a[]) {
    if(i==n||s<0)
    return 0;
    if(s==0)
    return 1;
    checksum(s,n,i+1,a);
    checksum(s-a[i],n,i+1,a); }
int main() {
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int z=checksum(s,n,0,a);
    if(z==0)
    printf("NO");
    else
    printf("YES");
    return 0; }