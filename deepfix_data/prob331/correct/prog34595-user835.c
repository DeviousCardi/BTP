#include <stdio.h>
int main(){
    int a,i,j;
    int sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        for(j=1;j<=a;j++) {
            if(i==j) {
                sum=sum+1; }
            else {
                continue; } } }
    if(sum==a) {
        printf("Given identity matrix %d x %d is an IDENTITY MATRIX",a,a); }
    else {
        printf("Given identity matrix %d x %d is  NOT an IDENTITY MATRIX",a,a); }
    return 0; }