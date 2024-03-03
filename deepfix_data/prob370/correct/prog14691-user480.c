#include<stdio.h>
#include<math.h>
int main()
{int a;
 int b;
 int c;
 scanf("%d %d %d",&a,&b,&c);
 if( a>b && a>c){
     if(a>=b+c)
      {printf("INVALID");}
     else if(a*a==b*b+c*c)
      {printf("RIGHT");}
     else if(a*a>b*b+c*c)
      {printf("OBTUSE");}
     else
      {printf("ACUTE");} }
     else if(b>c && b>a)
     {  if(b>=a+c)
         {printf("INVALID");}
        else if(b*b==a*a+c*c)
         {printf("RIGHT");}
        else if(b*b>a*a+c*c)
         {printf("OBTUSE");}
        else
         {printf("ACUTE");} }
    else {
         if(c>=b+a)
          {printf("INVALID");}
         else if(c*c==b*b+a*a)
          {printf("RIGHT");}
         else if(c*c>b*b+a*a)
          {printf("OBTUSE");}
         else
          {printf("ACUTE");} }
        return 0; }