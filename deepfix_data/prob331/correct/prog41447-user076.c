#include <stdio.h>
int main(){
       int n,i,j,Aij;
       scanf("%d\n",&n);
       for(i=1;i<=n;i=i+1) {
            for(j=1;j<=n;j=j+1) {
                scanf("%d",&Aij); }
            printf("\n"); }
        if((Aij==1 && i==j)&&(Aij==0 && i!=j))
                printf("yes");
        else
                printf("no");
    return 0; }