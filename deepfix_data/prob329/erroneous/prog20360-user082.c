#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((+b>c)&&(b+c>a)&&(c+a>b)) {
        if(((c*c)=(a*a)+(b*b))||((b*b)=(a*a)+(c*c))||((a*a)=(b*b)+(c*c)))) {
            printf("Right Triangle"); }
        else {
            printf("Not Right Triangle"); } }
    else {
        printf("Cannot form a Triangle"); }
    return 0; }