#include<stdio.h>
int main() {
    int a,b,c;
    if((a+b)<c){
        printf("INVALID%d\n");}
        else if(a*a+b*b>c*c){
            printf("ACUTE%d\n"); }
    else if((a*a+b*b)==c*c){
        printf("RIGHT%d");}
        else if(a*a+b*b<c*c){
            printf("OBTUSE%d"); }
    return 0; }