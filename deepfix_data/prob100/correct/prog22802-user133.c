#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    int s2=INT_MAX;
    int a;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++) {
        int s1=INT_MIN;
        for(int j=1;j<=n;j++) {
            scanf("%d",&a);
            if(a>s1)
            s1=a; }
        if(s1<s2)
        s2=s1; }
    printf("%d",s2);
    return 0; }