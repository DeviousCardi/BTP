#include <stdio.h>
#include <stdlib.h>
int main() {
    int s1,s2,s3;
    scanf("%d%d%d", &s1, &s2, &s3);
    if((s1+s2-s3)*(s2+s3-s1)*(s3+s1-s2) <=0)
        printf("Cannot form a Triangle");
    else if((s1*s1+s2-s3)*(s2+s3-s1)*(s3+s1-s2)==0)
        printf("Not Right Triangle");
	return 0; }