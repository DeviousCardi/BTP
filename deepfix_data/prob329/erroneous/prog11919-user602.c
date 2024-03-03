#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<c||a+c<b||b+c<a)
    {printf("cannot form a triangle");}
    else{
        if((a*a) +(b*b)=c*c||(a*a) +(c*c)=b*b||(b*b) +(c*c)=a*a)
        {printf("right triangle");}
        else{
            printf("not right triangle");} } }
	return 0; }