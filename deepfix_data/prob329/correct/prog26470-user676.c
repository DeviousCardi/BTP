#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>=0&&b>=0&&c>=0){
    if (a*a+b*b==c*c||b*b+c*c==a*a){
        printf("Right Triangle");}
        else{
            if((a*a+b*b!=c*c||b*b+c*c!=a*a)&&((a*a+b*b)>(c*c)||(b*b+c*c)>(a*a))){
                printf("Not Right Triangle");}
               else{
                        if((a*a+b*b)<=(c*c)){
                    printf("Cannot form a Triangle");} } } }
    return 0; }