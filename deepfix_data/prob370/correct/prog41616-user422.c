#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a<b<c)&&(b<a<c)){
    if(a*a+b*b>c*c){
    printf("ACUTE");
    } else { if(a*a+b*b<c*c) { printf("OBTUSE");}
    else { if(a*a+b*b==c*c) {printf("RIGHT");}
    else { printf("INVALID");}}}
    }else { if((a<c<b)&&(c<a<b)){
    if(a*a+c*c>b*b){
    printf("ACUTE");
    } else { if(a*a+c*c<b*b) { printf("OBTUSE");}
    else { if(a*a+c*c==b*b) {printf("RIGHT");}
    else { printf("INVALID");}}}
    }else{if((b<c<a)&&(c<b<a)){
    if(b*b+c*c>a*a){
    printf("ACUTE");
    } else { if(b*b+c*c<a*a) { printf("OBTUSE");}
    else { if(b*b+c*c==a*a) {printf("RIGHT");}
    else { printf("INVALID");}}}
    }}}
    return 0; }