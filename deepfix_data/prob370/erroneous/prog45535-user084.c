#include<stdio.h>
int main() {
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b<c)||(b+c<a)||(a+c<b))
    printf("INVALID");
    else{
    if((a*a+b*b-c*c<0)||(a*a+c*c-b*b<0)||(b*b+c*c-a*a<0))
    print("OBTUSE");
    else if((a*a+b*b-c*c==0)||(a*a+c*c-b*b==0)||(b*b+c*c-a*a==0))
    print("RIGHT");
    else
    printf("ACUTE"); }
    return 0; }