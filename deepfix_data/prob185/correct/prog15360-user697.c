#include <stdio.h>
int n,s;
int check(int a[],int i,int t){
    if(t<0||i<0){return 0;}
    if(t==0){return 1;}
    return check(a,i--,t-a[i])||check(a,i--,t); }
int main() {
    scanf("%d %d",&n,&s);
    int a[n],k=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    k=check(a,n-1,s);
    if(k==1)
    printf("YES");
    if(k==1)
    printf("NO");
    return 0; }