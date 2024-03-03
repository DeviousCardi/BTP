#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,g,j;
    g = 0;
    scanf("%d",&i);j = i;
    while(j>0) {
        g = j%10 +g;
        g = g*10;
        j = j/10; }
    if((g/10) == i)
    {printf("YES");}
    else
    {printf("NO");}
	return 0; }