#include <stdio.h>
#include <stdlib.h>
int main(){
 int a,b,c;
	scanf("%d%d%d",&a,&b,&c); {
        if(c*c==a*a+b*b){
            printf("Right Triangle");}
        else {
            if(a*a==b*b+c*c){
            printf("Right Triangle");}
            else{if(b*b==a*a+c*c){
                printf("Right Triangle");}
                else{if(a+b>c){
                    printf("Not Right Triangle");}
                    else{
                        printf("Cannot form a Triangle");} } } } }
    return 0; }