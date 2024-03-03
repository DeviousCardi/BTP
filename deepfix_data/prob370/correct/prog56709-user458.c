#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ( (a+b)<=c||(a+c)<=b||(c+b)<=a){
        printf("INVALID");}
         else if(a*a+b*b==c*c){
            printf("RIGHT");}
              else if (a*a+c*c<b*b){
        printf("OBTUSE");}
        else if(a*a+b*b>c*c) {
         printf("ACUTE"); } }