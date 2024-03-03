#include <stdio.h>
int main(){
    int n,i,j,c,flag;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            scanf ("%d",&c);
            if (i==j && c!=1) {
                    flag=1;
                    break; }
            else
                if (i!=j && c!=0) {
                    flag=1;
                    break; } }
        if (flag==1)
        break; }
    if (flag==1)
        printf ("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n,n);
    else
        printf ("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    return 0; }