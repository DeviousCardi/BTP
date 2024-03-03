#include <stdio.h>
int sum(int arr[],int n) {
    if(n==0) return 0;
    else return arr[n-1]+sum(arr,n-1); }
int check(int a[],int t,int s,int n) {
    if(n==0) return 0;
    if(t==s) return 1;
    int x=check(a,t,s,n-1);
    int y=check(a,t+a[n-1],s,n-1);
    if(x==1||y==1) return 1; }
int main() {
    int i,x,n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    x=check(a,0,s,n);
    if(x==1) printf("YES");
    else printf("NO");
    return 0; }