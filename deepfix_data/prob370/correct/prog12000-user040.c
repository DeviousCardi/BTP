#include<stdio.h>
int main() {
    int b;
    int a;
    int c;
    int RIGHT=0;
    int ACUTE=0;
    int OBTUSE=0;
    int INVALID=0;
    scanf("%d%d%d" ,&a,&b,&c);
    if(a+b>c)
    if
    ((a*a)+(b*b)==c*c) {
        printf("RIGHT"); }
    else if ((a*a)+(b*b)<c*c) {
    printf("OBTUSE"); }
    else if ((a*a)+(b*b)>c*c) {
        printf("ACUTE"); }
    else {
        printf("INVALID"); }
    return 0; }