#include <stdio.h>
int checksum(int sum, int i, int a[]) {
 if(i==n-1)
 return 0;
 if(s==0)
 return 1;
 checksum(s,i+1,a);
 checksum(s-a[i],i+1,a); }
int main() {
    int n,s;
    int a[n];
    scanf("%d %d",&n,&s);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int z=checksum(s,0,a)
    if(z==0)
    printf("NO");
    else
    printf("YES");
    return 0; }