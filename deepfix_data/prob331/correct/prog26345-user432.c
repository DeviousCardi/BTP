#include <stdio.h>
int main(){
    int n,i,j,temp,flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
        scanf("%d",&temp);
        if((i==j)&&(temp!=1))
            flag=0;
        if((i!=j)&&(temp!=0))
            flag=0; } }
    if(flag==1)
        printf("GIVEN %d * %d matrix is an IDENTITY MATRIX",n,n);
    if(flag==0)
        printf("GIVEN %d * %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }