#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<a+1;i=i+1) {
        for (j=1;j<2*i;j=j+1) {
            if (j%2==0){printf ("%c",'x');}
            else {printf ("%c",'*');} }
        printf (" \n"); }
	return 0; }