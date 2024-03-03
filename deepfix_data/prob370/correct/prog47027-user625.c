#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c){
        if (a*a+b*b==c*c){printf("RIGHT");}
        else if(a*a+b*b<c*c||a*a>b*b+c*c||a*a+c*c<b*b){printf("OBTUSE"          );}
        else if(a*a+b*b>c*c||a*a<b*b+c*c||a*a+c*c>b*b){printf("ACUTE");} }
    else printf("INVALID");
    return 0; }