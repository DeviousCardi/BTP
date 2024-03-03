#include <stdio.h>
int max (int a,int b); {
    if(a>=b)
    {return a;}
    else{return b;} }
int main() {
    int n,m,a;
    int max=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        int sum=0;
        for(int j=0;j<m;j++) {
            scanf("%d",&a);
            sum=sum+a; }
        printf("\n");
        max=max(sum,max); }
    printf("%d",max);
    return 0; }