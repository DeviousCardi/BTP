#include<stdio.h>
int sq(int x){
    return (x*x); }
int main() {
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(c>=(a+b) || a>=(c+b) || b>=(c+a))
        printf("INVALID");
    else{
        if(sq(c)>(sq(a)+sq(b))
           || sq(b)>(sq(c)+sq(a))
           || sq(a)>(sq(b)+sq(c)))
          printf("OBTUSE");
        else if(sq(c)==(sq(a)+sq(b))
                ||sq(b)==(sq(a)+sq(c))
                ||sq(a)==(sq(c)+sq(b)))
               printf("RIGHT");
        else
            printf("ACUTE"); }
    return 0; }