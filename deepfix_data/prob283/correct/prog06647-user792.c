#include<stdio.h>
#include<stdlib.h>
int a(int m, int n) {
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return a(m-1,1);
    else
    return a(m-1,a(m,n-1)); }
int main() {
    int i,j,k,f;
    scanf("%d",&k); {
        for(i=0;i<4;i++) {
            f=0;
            for(j=0;j<6;j++) {
                if(k==a(i,j))
                {printf("%d %d",i,j);
                f=1;
                break;} }
            if(f==1)
            break; } }
    if(i==4)
    printf("-1");
    return 0; }