#include <stdio.h>
#include <stdlib.h>
int main() {
int a,i,j;
scanf("%d",&a);
    for (i=1;i<=a;i++) {
    if (i<=(a+1)/2)
        {for (j=1;j<=a;j++) {
            if (j<=(((a+1)/2)-(i))||j>=(((a+1)/2)+(i)))
            printf(" ");
            else printf ("*"); }
            printf("\n");}
    else
        {for (j=1;j<=a;j++) {
            if (j<=((a/2)-(((i+1)/2)))||j>=((a/2)+(((i+1)/2))))
            printf(" ");
            else printf ("*"); }
            printf("\n");} }
	return 0; }