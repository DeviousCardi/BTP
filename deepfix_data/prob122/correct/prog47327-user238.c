#include <stdio.h>
int main() {
    int n,i,j,flag=0,unit;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&unit);
            if(i==j) {
                if(unit!=1)
                flag=1; }
            else {
                if(unit!=0)
                flag=1; }
            if(flag==1)
            break; }
        if(flag==1)
        break; }
    if(flag==0)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }