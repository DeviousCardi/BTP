#include <stdio.h>
int main(){
    int n,row,x,i,flag=0,y=1;
    scanf("%d",&n);
    scanf("%d",&x);
    for(row=1;row<=n;row++) {
        for(i=1;i<=n;i++) {
            scanf("%d",&x);
            if(row==i&&x==1)
            flag=1;
            else if(row!=i&&x==0)
            flag=1;
            else {
                flag=0;
                y=0;
                break; }
            if(y==0)
            break; } }
    if(flag==1)
    printf("GIVEN n*n matrix is IDENTITY MATRIX");
    else
    printf("GIVEN n*n matrix is NOT an IDENTITY MATRIX");
    return 0; }