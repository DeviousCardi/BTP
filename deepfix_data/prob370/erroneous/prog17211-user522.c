#include<stdio.h>
int main() {
    int a,b,c,hyp1,hyp2,hyp3;
    scanf("%d %d %d",&a,&b,&c);
    hyp1=(a*a+b*b);
    hyp2=(b*b+c*c);
    hyp3=(a*a+c*c);
    if((hyp1==c*c)||(hyp2==a*a)||(hyp3==b*b))
    printf("RIGHT");
    else if(((hyp1<c*c)||(hyp2<a*a)||(hyp3<b*b)))
    printf("OBTUSE");
    else if((hyp1>c*c)||(hyp2>a*a)||(hyp3>b*b))
    printf("ACUTE");
    else((a+b<c)||(a+c<b)||(b+c<a))
    printf("INVALID");
    return 0; }