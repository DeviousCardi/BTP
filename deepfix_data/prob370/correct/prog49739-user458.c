#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)<=c||(a+c)<=b||(b+c)<=a){
        printf("INVALID\n");}
        else if(c*c+b*b>a*a){
            printf("ACUTE\n"); }
    else if((a*a+b*b)==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
        printf("RIGHT\n");}
        else if((a*a+b*b)<c*c||a*a+c*c<b*b||c*c+b*b<a*a){
            printf("OBTUSE"); }
    return 0; }