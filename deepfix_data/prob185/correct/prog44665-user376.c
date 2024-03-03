#include<stdio.h>
int sum(int a[],int k,int n,int s) {
    if(k>=n)
        return 0;
    if(s-a[k]==0)
        return 1;
    if(sum(a,k+1,n,s-a[k])||sum(a,k+1,n,s))
        return 1; }
int main() {
    int n,s,r;
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    r=sum(a,0,n,s);
    if(r==1)
        printf("YES");
    else printf("NO");
    return 0; }