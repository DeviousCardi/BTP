#include <stdio.h>
int main(){
    int a,i,j,sum;
    scanf("%d",&a);
    for(i=1;i<=a;i++) {
        sum=0;
        for(j=1;j<=a;j++) {
            if(i==j) {
                sum=sum+1; }
            else {
                continue; } } }
    if(sum==a) {
        printf("Given identity matrix is an IDENTITY MATRIX"); }
    else {
        printf("Given identity matrix is  NOT an IDENTITY MATRIX"); }
    return 0; }