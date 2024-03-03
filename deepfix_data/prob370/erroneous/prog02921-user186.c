#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,swap;
    scanf("%a%b%c",&a,&b,&c);
    if(a<b) {
        swap=b;
        b=a;
        a=swap; }
    if(a<c) {
        swap=c;
        c=a;
        a=swap; }
    if(a>=(b+c)) {
        printf("INVALID") }
    else if(pow(a,2)>(pow(b,2)+pow(c,2))) {
        printf("OBTUSE"); }
    else if(pow(a,2)=(pow(b,2)+pow(c,2))) {
        printf("RIGHT"); }
    else if(pow(a,2)<(pow(b,2)+pow(c,2))) {
        printf("ACUTE"); }
    return 0; }