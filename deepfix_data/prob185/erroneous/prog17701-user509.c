#include <stdio.h>
int sum,n;
int recurse(int a[],int in,int sum,int key)
{if(in==n) {
    if(sum==key) return 1;
    else return 0;}
    else return recurse(a,in+1,a[in]+sum,key)||recurse(a,in+1,sum,key); }
int main() {
    int a,s[100];
    scanf("%d%d",&n,&b);
    for(int i=0;i<n;i++) {
        scanf("%d",&s[i]); }
    int p=recurse(s,0,0,b);
    if(p==0) printf("no");
    else printf("yes");
    return 0; }