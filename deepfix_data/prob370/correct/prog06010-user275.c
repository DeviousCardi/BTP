#include<stdio.h>
int main()
{   int a,b,c;
    int m1,m2,m3;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c)&&(b+c>a)&&(c+a>b)){
        if ((a>=b)&&(a>=c)){
            m2=c;m1=b;m3=a; }
        if ((b>=a)&&(b>=c)){
            m2=c;m1=a;m3=b; }
        if ((c>=b)&&(a>=c)){
            m2=a;m1=b;m3=c; }
        if (m1*m1+m2*m2>m3*m3){
                printf("OBTUSE"); }
            if (m1*m1+m2*m2<m3*m3){
                printf("ACUTE"); }
            else{
                printf("RIGHT"); } }
    else{
        printf("INVALID"); }
    return 0; }