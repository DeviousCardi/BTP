#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float x=0.0,y=0.0,z=0.0;
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)) {
        float g=(float) a;
        float h=(float) b;
        float i=(float) c;
    x=((g*g+h*h)-i*i)/(2*g*h);
    y=((i*i)+(h*h))-g*g)/(2*i*h);
    z=((g*g)+(i*i))-h*h)/(2*g*i);
    printf("%f %f %f",x,y,z);
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