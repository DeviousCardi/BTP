#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a<b) {
        if (a<c) {
            if (b<c) {
                printf("%d",b); }
            else if (b>c) {
                printf("%d",c); }
            else if(b==c) {
                printf("%d",a); } }
        else if(a>c) {
            printf("%d",a); } }
    else if (a>b) {
        if (a<c) {
            printf("%d",a); }
        else if(a>c) {
            if (b<c)
            printf("%d",c);
            else if(b>c)
            printf("%d",b);
            else if(b==c);
            printf("%d",c); } }
    else if(a==b) {
        if(b==c)
        printf("%d",a);
        else if(b<c)
        printf("%d",b);
        else if(b>c)
        printf("%d",c); }
        else if(a==c) {
        if(c==b)
        printf("%d",a);
        else if(c<b)
        printf("%d",c);
        else if(c>b)
        printf("%d",b); }
	return 0; }