#include <stdio.h>
#include <stdlib.h>
int main() {int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>=b)&&(b>=c)){ }
else if((b>=a)&&(b>=c)){
    d=b;
    b=a;
    a=d; }
else(c>=a)&&(c>=b){
    d=c;
    c=a;
    a=d; }
if(a*a<b*b+c*c){
printf("Acute Triangle");}
else if(a>=b+c){
printf(Cannot form a Triangle);}
else{
printf("Not Acute Triangle");}
return 0; }