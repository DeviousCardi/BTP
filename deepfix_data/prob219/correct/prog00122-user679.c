#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b) {
        temp=a;
        a=b;
        b=temp; }
    if(b<c) {
        temp=b;
        b=c;
        c=temp; }
     if(a<b) {
        temp=a;
        a=b;
        b=temp; }
    if(a==b)
    printf("%d",c);
    else
    printf("%d",b);
	return 0; }