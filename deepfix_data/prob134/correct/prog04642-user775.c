#include <stdio.h>
#include <stdlib.h>
int binomial(int a, int b){
    if(a<b)
    return 0;
    else if(a==0&&b==0)
    return 1;
    else if(b==0)
    return 1;
    else return (binomial(a-1,b)+binomial(a-1,b-1)); }
int main() {
    int l,m,n,o;
    scanf("%d",&n);
    for(l=0;l<=20;l++){
        o=0;
        for(m=0;m<=20;m++){
            if(binomial(m,n)==o)
            {printf("%d%d",m,n);
            o=1;
            break; } }
            if(o==1)
            break; }
        if(m==21) printf("-1");
	return 0; }