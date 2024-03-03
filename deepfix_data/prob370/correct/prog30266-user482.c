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
    value=((A*A)+(C*C)-(B*B))/(2.0*A*C); }