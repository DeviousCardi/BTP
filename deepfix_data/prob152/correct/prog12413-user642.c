#include <stdio.h>
int sum(int arr[],int m) {
    if(m==1)
        return arr[0];
    else
        return arr[m-1]+sum(arr,m-1); }
int check(int a[],int t,int l,int n,int s) {
    if(l==n) return 0;
    if (t+a[l]==s/2) return 1;
    int x=check(a,t,l+1,n,s);
    int y=check(a,t+a[l],l+1,n,s);
    if(x==1||y==1) return 1; }
int main() {
    int i,n,s,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    s=sum(a,n);
    if(s%2!=0) {
        printf("NO");
        return 0; }
    x=check(a,0,0,n,s);
    if(x==1)
    printf("YES");
    else printf("NO");
    return 0; }