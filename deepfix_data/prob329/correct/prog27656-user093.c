#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,d,e,f,g;
    scanf("%d%d%d",&a,&b,&c);
    if (a>c){
        if (a>b){d=a-b-c;
            e=a*a; }
        else{d=b-a-c;
            e=b*b; } }
    else{
        if (c>b){d=c-a-b;
            e=c*c; }
        else{d=b-c-a;
            e=b*b; } }
    f=(a*a+b*b+c*c);
    g=f-(2*e);
        if(d<0){
        if(g == 0){printf("Right Triangle\n");}
        else{printf("Not Right Triangle\n");} }
    else{printf("Cannot form a Triangle\n");}
    	return 0; }