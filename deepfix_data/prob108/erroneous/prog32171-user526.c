#include <stdio.h>
#include <stdlib.h>
int main() {
    int h;
    scanf("%d",&h);
    for(i=0;i<h;i++)
    {   if(i<=h/2) {
            for(j=0;j<i;j++)
            printf("*"); }
        else {
            for(j=(h/2-1);j>=0;j--)
            printf("*"); } }
	return 0; }