#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,g;
    g = 0;
    scanf("%d",&i);
    while(i>0) {
        g = i%10 +g;
        g = g*10;
        i = i/10; }
    if((g/10) == i)
    {printf("YES");}
    else
    {printf("NO");}
	return 0; }