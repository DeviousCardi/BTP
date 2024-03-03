#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b+c||b>=a+c||c>=a+b) {
        printf("invalid");
        return 0;
    };
    if(a*a+b*b==c*c){printf("RIGHT");}
    else if(a*a+c*c==b*b){printf("RIGHT");}
    else if(c*c+b*b==a*a){printf("RIGHT");}
    else if(a*a+b*b<c*c){printf("OBTUSE");}
    else if(a*a+c*c<b*b){printf("OBTUSE");}
    else if(a*a+b*b<a*a){printf("OBTUSE");}
    else {printf("ACUTE");}
    return 0; }