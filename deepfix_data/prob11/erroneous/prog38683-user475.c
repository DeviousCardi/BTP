#include <stdio.h>
int s,n;
int promote(int st,int en,int a[]) {
    int sum=0,i;
    if(st==n)
        return 0;
    if(en<st && st<n) {
        st+=1;
        en=n-1; }
    else if(en>st && st<n) {
        for(i=0;i<en;i++)
            sum+=a[i];
        if(sum==s)
            return 1; }
    return(promote(st,en--,a)); }
int main() {
    int flag;
    scanf("%d %d",&n,&s);
    int start=0,end=n-1;
    int trans[n];
    for(i=0;i<n;i++)
        scanf("%d",&trans[i]);
    flag=promote(start,end,trans);
    if(flag==1)
        printf("YES\n");
    else if(flag==0)
        printf("NO\n");
    return 0; }