#include <stdio.h>
int main(){
int a,b,c,d,i;
scanf("%d%d%d",&a,&b,&c);
d=a+b-2;
if(c ==1){
    printf("%d",a);}
    else if(c==2){printf("%d",b);}
    else if(c>2){ for(i=2;i<c;i++){
        d=a+b-2;
        printf("%d",d);
        a=b;
        b=d;} }
    return 0; }