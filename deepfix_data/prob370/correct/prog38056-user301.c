#include<stdio.h>
int main()
{int a,b,c,temp;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a<=b) {
    if(b<=c) {
        temp=a;
        a=c;
        c=temp; }
    else {
        if(a<=c) {
            temp = b;
            b=c;
            c=temp;
            temp=a;
            a=c;
            c=temp; }
        else {
            temp = b;
            b=a;
            a=temp; } } }
else {
    if(b<=c) {
        temp=b;
        b=c;
        c=temp; } }
if(c>0) {
if(a<(b+c)) {
    if((b*b + c*c) >a*a)
    printf("ACUTE");
    else if ((b*b + c*c)<a*a)
    printf("OBTUSE");
    else
    printf("RIGHT"); }
else
printf("INVALID"); }
else
printf("INVALID");
    return 0; }