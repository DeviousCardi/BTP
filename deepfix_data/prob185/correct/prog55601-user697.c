#include <stdio.h>
int n,s;
int check(int a[],int i,int t){
    if(t<0||i<0){printf("NO");return 0;}
    if(t==0){printf("YES");return 1;}
    return check(a,i--,t-a[i])||check(a,i--,t); }
int main() {
    scanf("%d %d",&n,&s);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    check(a,n-1,s);
    return 0; }