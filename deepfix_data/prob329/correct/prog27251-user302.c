#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a==0),(b==0),(c==0)){
        printf("Cannot form a triangle"); }
    else
    if ((a*a)==((b*b)+(c*c))) {
        printf("Right  Triangle");}
        else if ((a*a)!=(b*b+c*c)) {
            printf("Not Right Triangle"); }
        else printf("Cannot form a triangle");
	return 0; }