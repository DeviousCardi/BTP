#include<stdio.h>
int main() {
    int p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    if((p*p==q*q+r*r)||(q*q==p*p+r*r)||(r*r==p*p+q*q))
    printf("RIGHT");
    else if((p*p<q*q+r*r)||(q*q<p*p+r*r)||(r*r<p*p+q*q))
    printf("ACUTE");
    else if((p*p>q*q+r*r)||(q*q>p*p+r*r)||(r*r>p*p+q*q))
    printf("OBTUSE");
    else if((p+q==r)||(q+r==p)||(p+r==q))
    printf("INVALID");
    return 0; }