#include<stdio.h>
int main()
{int a,b,c,temp;
scanf("%d%d%d",&a,&b,&c);
if(a<b) {
    temp=a;
    a=b;
    b=temp;
    if(b<c) {
        temp=b;
        b=a;
        a=temp; } }
else {
    if(b<c) {
        temp=b;
        b=a;
        a=temp; } }
printf("%d %d %d",a,b,c);
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