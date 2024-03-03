#include<stdio.h>
#include<limits.h>
   min (int a,int b){
       if(a>b)
       return b;
       else
       return a;}
int main() {
    int i,j,m,n,a,k=0,max,l[100],z;
    l[0]=2147483648 ;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&a);
            if(a>k)
            k=a ;
            max=k ;
            l[i]=k; } }
    for(i=1;i<=m;i++) {
       z= min(l[i],l[0]);
       l[0]=l[i]; }
    printf("%d",z);
    return 0; }