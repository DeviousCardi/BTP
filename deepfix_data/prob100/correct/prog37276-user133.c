#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    int s1=0,s2=INT_MAX;
    int a;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            scanf("%d",&a);
            if(a>s1)
            s1=a; }
        if(s1<s2)
        s2=s1;
        s1=0; }
    printf("%d",s2);
    return 0; }