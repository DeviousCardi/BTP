#include <stdio.h>
int main(){
    int i,j,x,n,count;
    count=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=n;j=j+1){
            scanf("%d",&x);
            if((i==j && x==1) || (i!=j && x==0))
            count=count+1; } }
    if(count==n*n){
        printf("GIVEN 3 x 3 matrix is an IDENTY MATRIX");}
        else
        {printf("GIVEN 3 x 3 matrix is NOT an IDENTY MATRIX");}
    return 0; }