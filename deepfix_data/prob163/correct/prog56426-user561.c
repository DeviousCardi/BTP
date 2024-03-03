#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j;
    scanf ("%d\n%d\n",&a,&b);
    printf ("%d\n%d#",a,b);
    char x[a];
    char f;
    char y[b];
    for (i=0;i<a;i++)
    scanf ("%c",&x[i]);
    printf ("%d\n",x[2]);
    scanf ("%c",&f);
    for (j=0;j<b;j++)
    scanf ("%c",&y[i]);
    printf  ("%c",y[3]);
	return 0; }