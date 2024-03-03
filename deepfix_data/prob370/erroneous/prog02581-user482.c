#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    int A;
    int B;
    int C;
    if(b<=a&&c<=a) {
        A=b;B=a;C=c; }
    elseif(a<=b&&c<=b) {
        A=a;B=b;C=c; }
    else(a<=c&&b<=c) {
        A=a;B=c;C=b; }
    float value=0.0;
    value=(((A*A)+(C*C)-(B*B))/(2*A*C));
    return 0; }