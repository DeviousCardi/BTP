#include <stdio.h>
#include <stdlib.h>
int main()
int n1;
scanf("%d",&n1);
int a[20];
for(int i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
int min=a[0];
for(int i=1;i<n1;i++) {
        if (a[i]<a[0])
            min=a[i]; }
printf("%d",min);
	return 0; }