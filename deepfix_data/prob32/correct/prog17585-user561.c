#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    scanf ("%d",&j);
    char a[j];
    for (i=0;i<j;i++) {
        a[i]=getchar();
        if (i>1) {
            if (a[i-2]>a[i-1]&&a[i]>a[i-1])
            {printf ("Yes");
            break;}
            else
            {if (i==j-1)
            printf ("No");
            break; }
        }; }
	return 0; }