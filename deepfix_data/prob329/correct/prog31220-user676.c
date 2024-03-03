#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a*a+b*b==c*c||b*b+c*c==a*a)&&(a>0&&b>0&&c>0)){
        printf("Right Triangle");}
        else{
            if((a*a+b*b)>(c*c)){
                printf("Not Right Triangle");}
               else{
                 if((a*a+b*b)<=(c*c)&&(a>=0&&b>=0&&c>=0)){
                    printf("Cannot form a Triangle");} } }
    return 0; }