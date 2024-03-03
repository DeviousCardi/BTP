#include<stdio.h>
int main() {
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if((A+B>C)&&(B+C>A)&&(C+A>B)) {
        if((A*A+B*B==C*C)||(B*B+C*C==A*A)||(A*A+C*C==B*B)) {
            printf("RIGHT"); }
        else if((A*A+B*B>C*C)&&(B*B+C*C>A*A)&&(A*A+C*C>B*B)) {
            printf("ACUTE"); }
        else
        printf("OBTUSE"); }
    else
    printf("INVALID");
    return 0; }