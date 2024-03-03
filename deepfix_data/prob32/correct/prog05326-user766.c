#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int i=1;
    for
(i=0;i<n;i=i+1)
{scanf("%d",&a[i]);}
     for
    (i=1;i<n-1;i=i+1) {
        if((a[i]<a[i+1])&&(a[i]<a[i-1]))
        {printf("Yes");
            break;}
            else if
            (i<n-2)
            {continue;}
            else
            {printf("No");} }
	return 0; }