#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    i=1;
    j=1;
    int flag;
    int a;
    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            scanf("%d",&a);
            if(((i==j)&&a==1)&&((i!=j)&&a==0)) {
                flag=1;
                break ; }
            else {
                flag=0; } } }
    if((flag=1)) {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX", n,n); }
 if((flag=0)) {
     printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX", n,n); }
    return 0; }