#include<stdio.h>
int main()
{float a,b,c;
scanf("%f%f%f",&a,&b,&c);
float d=((b*b)+(c*c)-(a*a));
float e=((c*c)+(a*a)-(b*b));
float f=((a*a)+(b*b)-(c*c));
if(a>=b+c){printf("invalid");}
else{if(b>=a+c){printf("invalid");}
else{if(c>=a+b){printf("invalid");}
else{if(d*e*f>0){printf("acute");}
else{if(d*e*f==0){printf("right");}
else{if(d*e*f<0){printf("obtuse");};};};};}
    return 0; }