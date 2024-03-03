#include<stdio.h>
int main()
{int a,b,c,temp;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a<b) {
    temp=a;
    a=b;
    b=temp;
    if(b<c) {
        temp=b;
        b=c;
        c=temp; }
    if(a<b) {
         temp=a;
    a=b;
    b=temp; } }
else {
    if(b<c) {
        temp=b;
        b=c;
        c=temp; } }
if(a<(b+c)) {
    if((b*b + c*c) >a*a)
    printf("ACUTE");
    else if ((b*b + c*c)<a*a)
    printf("OBTUSE");
    else
    printf("RIGHT"); }
else
printf("INVALID");
    return 0; }