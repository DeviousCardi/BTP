#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int p=(a*a + b*b) -c*c;
    int q=(b*b + c*c) -a*a;
    int r=(c*c + a*a) -b*b;
    if(p>0&&q>0&&r>0)
    printf("ACUTE");
    else if(p==0||q==0||r==0)
    printf("RIGHT");
    else if(p<0||q<0||r<0)
    printf("OBTUSE");
    else if(a+b>c;b+c>a;c+a>b)
    printf("INVALID");
    return 0; }