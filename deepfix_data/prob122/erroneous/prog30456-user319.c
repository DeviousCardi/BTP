#include <stdio.h>
int main(){
    int n,a;
    scanf("%d\n",&n);
    int i=0,j=0;
    a=i*j;
    for (i=1;i<=n;i++){
        for("j=1;j<=n;j++"){
            if(i==j)
            a=1;
            else if(i!=j)
            a=0;
            scanf("%d",&a); }
        ptintf("/n"); }
    return 0; }