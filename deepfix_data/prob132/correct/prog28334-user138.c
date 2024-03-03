#include<stdio.h>
int main() {
    int n,i,j,cnt=0,flag=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    {scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        int t;
        cnt=0;
        t=a[i];
        for(j=0;j<n;j++) {
            if(a[j]==t)
                {cnt++;} }
        if(cnt==t)
            {flag++;} }
    if(flag==n)
        {printf("yes");}
    else
        {printf("no");}
    return 0; }