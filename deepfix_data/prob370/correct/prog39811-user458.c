#include<stdio.h>
int main() {
    int a,b,c;
    if((a+b)<c){
        printf("INVALID\n");}
        else if(a*a+b*b>c*c){
            printf("ACUTE\n"); }
    else if((a*a+b*b)==c*c){
        printf("RIGHT\n");}
        else if(a*a+b*b<c*c){
            printf("OBTUSE"); }
    return 0; }