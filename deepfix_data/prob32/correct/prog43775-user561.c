#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    char a[20];
    for (i=0;i<20;i++) {
        a[i]=getchar();
        if (i>1) {
            if (a[i-2]>a[i-1]&&a[i]>a[i-1])
            printf ("Yes");
            else
            printf ("No");
        };
        printf ("%c",a[i]); }
	return 0; }