#include <stdio.h>
int check(int a[],int n,int s) {
    if(n<0)
    return 0;
    if(s==0)
    return 1;
    else
    return(check(a,n-1,s-a[n])); }
int main() {
    int n,s,i,a[30];
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    if(check(a,n-1,s))
    printf("YES");
    else printf("NO");
    return 0; }