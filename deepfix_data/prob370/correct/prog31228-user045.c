#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float x=0.0,y=0.0,z=0.0;
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)) {
    x=(((a*a)+(b*b))-c*c)/(2*a*b);
    y=(((c*c)+(b*b))-a*a)/(2*c*b);
    z=(((a*a)+(c*c))-b*b)/(2*a*c);
    if((x<0.0)||(y<0.0)||(z<0.0))
    printf("OBTUSE");
    else
    if((x==0.0)||(y==0.0)||(z==0.0))
    printf("RIGHT");
    else
    printf("ACUTE"); }
    else
    printf("INVALID");
    return 0; }