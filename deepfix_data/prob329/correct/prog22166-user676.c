#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a*a+b*b==c*c){
        if(b*b+c*c==a*a){
        printf("Right Triangle");}
    else{
            if((a*a+b*b)>(c*c)){
                printf("Not Right Triangle");}
                else{
                    printf("Cannot form a Triangle");} } }
    return 0; }