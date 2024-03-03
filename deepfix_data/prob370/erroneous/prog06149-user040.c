#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    int RIGHT=0;
    int ACUTE=0;
    int OBTUSE=0;
    scanf("%d%d%d" ,&a,&b,&c);
    if
    ((a*a)+(b*b)=(c*c)); {
        printf("%d" ,RIGHT); }
    else if ((a*a)+(b*b)>c*c)); {
    printf("%d" ,OBTUSE); }
    else if ((a*a)+(b*b)<c*c)); {
        printf("%d" ,ACUTE) }
    else {
        printf("%d" ,INVALID); }
    return 0; }