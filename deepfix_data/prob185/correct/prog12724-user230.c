#include <stdio.h>
int check(int a[],int n,int m,int i,int sum) {
    if(i==n)
        return 0;
    if(m==sum && i!=0)
        return 1;
    else
        return check(a,n,m,i+1,sum+a[i])||check(a,n,m,i+1,sum); }
int main() {
    int n,m,res;
    scanf("%d %d",&n,&m);
    int arr[n];
    res=check(arr,n,m,0,0);
    if(res==0)
        printf("NO");
    else
        printf("YES");
    return 0; }