#include<stdio.h>
int sum(int a[],int k,int n,int s) {
    if(k>n)
        return 0;
    if(s-a[k]==0)
        return 1;
    if(sum(a,k+1,n,s-a[k])||sum(a,k+1,n,s))
        return 1;
    else
    return 0; }
int main() {
    int n,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]);
        s=s+a[i]; }
    if(s%2==0)
        int r=sum(a,0,n,s/2);
    if(r==1)
        printf("YES");
    else
        printf("NO");
    if(s%2!=0)
        printf("YES");
    return 0; }