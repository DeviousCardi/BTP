#include<stdio.h>
int main() {
    int a=0;
    int b=0;
    int c=0;
    scanf("%d%d%d",&a,&b,&c);
    int A=0;
    int B=0;
    int C=0;
    if(a<=b) {
        if(b<=c)
        {A=a;B=c;C=b;}
        else{A=a;B=b;c=c;} }
    else {
        if(a<=c){A=a;B=c;C=b;}
        else{A=b;B=a;C=c;} }
    float value=0;
    value=((A*A)+(C*C)-(B*B))/(2.0*A*C);
    if(-1.0<value&&value<1.0) {
        if(-1.0<value&&value<0.0) {printf("OBTUSE");}
        else {
            if(value==0.0){printf("RIGHT");}
            else{printf("ACUTE");} } }
    else{printf("INVALID");}
    printf("\n%d %d %d",A,B,C);
    return 0; }