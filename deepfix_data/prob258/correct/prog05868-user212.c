#include <stdio.h>
#include <stdlib.h>
int main() {
            int n,i;
            scanf ("%d\n",&n);
            int a[n];
            for (i=0;i<n;i++)
            { scanf ("%d\n",&a[i]);}
            if (n==1) {printf ("Yes"); return 0;}
            for(i=0;i<n;i++) {
                if (a[i]>a[i-1]&&a[i]>a[i+1]) {printf("Yes"); return 0;} }
            printf("No");
	return 0; }