#include<stdio.h>
int main()
{float a,b,c;
scanf("%f%f%f",&a,&b,&c);
float d=((b*b)+(c*c)-(a*a));
float e=((c*c)+(a*a)-(b*b));
float f=((a*a)+(b*b)-(c*c));
if(a>=b+c){printf("INVALID");}
else{if(b>=a+c){printf("INVALID");}
else{if(c>=a+b){printf("INVALID");}
else{if(d*e*f>0){printf("ACUTE");}
else{if(d*e*f==0){printf("RIGHT");}
else{if(d*e*f<0){printf("OBTUSE");};};};};};}
    return 0; }