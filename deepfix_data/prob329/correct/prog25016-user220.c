#include <stdio.h>
#include <stdlib.h>
int main(){
 int a,b,c;
	scanf("%d%d%d",&a,&b,&c); {
        if(c*c==a*a+b*b &&c*c!=0){
            printf("Right Triangle");}
        else {
            if(a*a==b*b+c*c){
            printf("Right Triangle");}
            else{if(b*b==a*a+c*c){
                printf("Right Triangle");}
                else{if(a+b<=c){
                    printf("Cannot form a Triangle");}
                    else{
                        printf("Not Right Triangle");} } } } }
    return 0; }