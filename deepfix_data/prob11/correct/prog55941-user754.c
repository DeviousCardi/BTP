#include <stdio.h>
int fn(int [],int,long,long,int);
int main() {
    int N,i,f=0;long S;
    int a[30];
    scanf("%d %ld",&N,&S);
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    f=fn(a,N,S,0,0);
    if(f==0)
        printf("NO");
    else if(f==1)
        printf("YES");
    return 0; }
int fn(int a[],int n,long s,long sum,int i) {
    if(sum==s)
        return 1;
    if(i==n&&sum!=s)
        return 0;
    return fn(a,n,s,a[i]+sum,i+1)||fn(a,n,s,sum,i+1); }