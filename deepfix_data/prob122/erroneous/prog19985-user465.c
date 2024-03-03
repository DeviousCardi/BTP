#include <stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",n);
    for(int i=1;i<=n*n;i++) {
        scanf("%d",a);
        if(n%i==0) {
            if(a!=1) {
                flag++;
                break; } }
        else if(a!=0) {
            flag++;
            break; } }
    if(flag==0)
    printf("GIVEN %d X %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d X %d matrix is NOT an IDENTITY MATRIX",n,n);
    return 0; }