#include <stdio.h>
#include <stdlib.h>
int main() {
int a,i,j;
scanf("%d",&a);
    for (i=1;i<=a;i++) {
    if (i<=(a+1)/2)
        {for (j=1;j<=a;j++) {
            if (j<=(((a+1)/2)-(i))||j>=(((a+1)/2)+(i)))
            {if (j<=(((a+1)/2)-(i)))
                printf(" "); }
            else printf ("*"); }
            printf("\n");}
    else
        {for (j=1;j<=a;j++) {
            if (j<a-(i-((a+3)/2))&&j>(i-((a+1)/2)))
            printf("*");
            else
            {if (j<a-(i-((a+3)/2)))
            printf (" ");} }
            printf("\n");} }
	return 0; }