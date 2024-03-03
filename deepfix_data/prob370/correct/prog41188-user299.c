#include<stdio.h>
int main() {
    int a,b,c;
    scanf ("%d%d%d",&a,&b,&c);
    if(a*a+b*b==c*c)
    printf ("RIGHT");
    if(a*a+b*b>c*c)
    printf("OBTUSE");
    if(a*a+b*b<c*c)
    printf("ACUTE");
    if((a+b<c)||(b+c<a)||(c+a<b)||((c-b)>a))
    printf("INVALID");
    return 0; }