#include<stdio.h>
int main()
{  int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
 if((a+b)<c||(b+c)<a||(c+a)<b)
   {printf("INVALID");}
 if(a>b){
   if(a>c){
    if((c*c+b*b)>a*a)
    {printf("ACUTE");}
  else
    {printf("OBTUSE");}
   } if((a*a+b*b)>c*c)
    {printf("ACUTE");}
  else
    {printf("OBTUSE");}
}else{
 if(b>c){
    if((a*a+c*c)>b*b)
    {printf("ACUTE");}
  else
   {printf("OBTUSE");}
   } if((a*a+b*b)>c*c)
    {printf("ACUTE");}
  else
   {printf("OBTUSE");} }
 if(((a*a+b*b)==c*c)||((b*b+c*c)==a*a)||((c*c+a*a)==b*b))
    {printf("RIGHT");}
    return 0; }