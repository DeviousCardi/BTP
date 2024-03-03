#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((b<c)&&(a<c)){if (a+b<=c){printf("INVALID");}else
    {if(a*a+b*b>c*c){
    printf("ACUTE");
    } else { if(a*a+b*b<c*c) { printf("OBTUSE");}
    else {printf("RIGHT");}
    }}}
    else {if ((a<b)&&(c<b)){if (a+c<=b){printf("INVALID");}else
      {if(a*a+c*c<b*b){
    printf("ACUTE");
    } else { if(a*a+c*c<b*b) { printf("OBTUSE");}
    else {printf("RIGHT");}
    }}}else {if ((b<a)&&(c<a)){if(b+c<=a){printf("INVALID");}
        else{ {if(c*c+b*b>a*a){
    printf("ACUTE");
    } else { if(c*c+b*b<a*a) { printf("OBTUSE");}
    else {printf("RIGHT");}
    }}}}}}
    return 0; }