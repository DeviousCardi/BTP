#include <stdio.h>
int main(){
    int n,row,x,i,flag=0,y=1;
    scanf("%d/n",&n);
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
    printf("GIVEN %d*%d matrix is IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d*%d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }