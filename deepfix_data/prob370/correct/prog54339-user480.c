#include<stdio.h>
#include<math.h>
int main()
{int a;
 int b;
 int c;
 scanf("%d %d %d",&a,&b,&c);
 if( a>b , a>c){
     if(a>=b+c){printf("INVALID");}
    else if(a*a==b*b+c*c){printf("RIGHT");}
     else if(a*a>b*b+c*c){printf("OBTUSE");}
     else{printf("ACUTE");}}
     else if(b>c , b>a)
     {if(a>=b+c){printf("INVALID");}
    else if(a*a==b*b+c*c){printf("RIGHT");}
     else if(a*a>b*b+c*c){printf("OBTUSE");}
     else{printf("ACUTE");} }
    return 0; }