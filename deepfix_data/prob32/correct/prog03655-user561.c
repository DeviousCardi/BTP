#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    scanf ("%d",&j);
    int a[j];
    for (i=0;i<j;i++)
    {   scanf ("\n%d",&a[i]);
        if (i==j-1)
        {   if (a[0]<a[1]||a[j-2]>a[j-1]) {
                printf ("Yes");
                break; } }
        if (i==1) {
                if ((j>a[i-1])&&(a[i]>a[i-1]))
                    {printf ("Yes");
                    break ;}
                else
                    if(j==2)
                    printf ("No"); }
        if (i>1) {
                if ((a[i-2]>a[i-1])&&(a[i]>a[i-1])) {
                    printf ("Yes");
                    break; }
                else {
                    if (i==j-1)
                    printf ("No"); } } }
	return 0; }