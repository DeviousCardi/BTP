#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int A;
    int B;
    int C;
    if(a<=b) {
        if(b<=c)
        {A=a;B=c;C=b;}
        else{A=a;B=b;c=c;} }
    else {
        if(a<=c){A=a;B=c;C=b;}
        else{A=b;B=a;C=c;} }
    float value=0;
    value=(((A*A)+(C*C)-(B*B))/(2*A*C));
    return 0; }