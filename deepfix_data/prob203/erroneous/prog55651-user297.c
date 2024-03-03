#include <stdio.h>
int main() {
    int N,a[N];
    scanf("%d\n",N);
    for(i=0,i<50,i++)
     if((a[i]>a[i+1])||(a[i]<a[i+1]))
         printf("YES");
     else
        printf("no");
	return 0; }