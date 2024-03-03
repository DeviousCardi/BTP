#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c>=b&&c>=a) {
        if((b+a>c)&&(b!=0)&&(a!=0)) {
            if(b^2+a^2>c^2)
                printf("Acute Triangle");
            else
                printf("Not Acute Triangle"); }
        else
            printf("Cannot form a Triangle"); }
	return 0; }