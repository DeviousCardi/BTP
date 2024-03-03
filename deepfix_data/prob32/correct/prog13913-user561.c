#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    scanf ("%d",&j);
    char a[j+1];
    for (i=0;i<j+1;i++) {
        a[i]=getchar();
        if (i>1) {
            if ((int)a[i-2]>(int)a[i-1]&&(int)a[i]>(int)a[i-1])
            {printf ("Yes");
            printf ("%d",i);
            break;}
            else
            {if (i==j)
            printf ("No"); } }
        else
        continue; }
	return 0; }