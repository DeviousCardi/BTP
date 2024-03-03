#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b<=c||a+c<=b||b+c<=a){
        printf("INVLAID");
        return 0; }
    else {
        if((a)*(a)==(b)*(b)+(c)*(c)||(b)*(b)==(a)*(a)+(c)*(c)||(c)*(c)==(b)*(b)+(a)*(a)){
            printf("RIGHT");
            return 0; }
        else if((a>b)&&(a>c)||(b>a)&&(b>c)||(c>a)&&(c>b)){
            printf("OBTUSE"); }
        else printf("ACUTE"); } }