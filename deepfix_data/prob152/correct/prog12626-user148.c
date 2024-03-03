#include <stdio.h>
int ck(int k, int n, int s,int a[]) {
    if(k>n)
        return 0;
    if(s==0 || s-a[k]==0)
        return 1;
    if(ck(k+1,n,s-a[k],a)==1)
        return 1;
    else if(ck(k+1,n,s,a)==1)
        return 1;
    else return 0; }
int main() {
    int n,i,sum=0,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
    if(sum%2!=0)
        printf("NO");
    else {
        sum=sum/2;
        for(i=1;i<=n;i++) {
            if(ck(i,n,sum,a)) {
                flag=1;
                break; } }
        if(flag==1)
            printf("YES");
        else
            printf("NO"); }
    return 0; }