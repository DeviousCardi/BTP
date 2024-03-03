#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    scanf ("%d",&j);
    int a[j];
    for (i=0;i<j;i++) {
        scanf ("%d",&a[i]);
        if (i>1) {
            if ((a[i-2]>a[i-1])&&(a[i]>a[i-1]))
            {printf ("Yes");
            printf ("%d",i);
            break;}
            else
            {if (i==j-1)
            printf ("No"); } }
        else
        continue; }
	return 0; }