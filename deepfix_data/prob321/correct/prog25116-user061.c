#include <stdio.h>
int main(){
    int a,b,c,d;
    float m;
    scanf("%d  %d", &a ,&b);
    scanf("%d  %d", &c, &d);
    if(a!=c||b!=d){
        if((a>=-100)&&(a<=100)&&(b>=-100)&&(b<=100)&&(c>=-100)&&(c<=100)&&(d>=-100)&&(d<=100)){
            if(a==c){printf("inf");}
            else {
                m= (d-b)/(c-a);
                printf("%0.2f", m); } } }
    return 0; }