#include <stdio.h>
int main(){
    int n,flag=0,flag1=0,a;
    scanf("%d",&n);
    for(int i=1;i<=n*n;i++) {
        scanf("%d",&a);
        if(flag1==0) {
            if(a!=1) {
                flag++;
                break; } }
        else if(flag1>0) {
            if(a!=0) {
                flag++;
                break; } }
        if(flag1==n)
        flag1=-1;
        flag1++; }
    if(flag==0)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }