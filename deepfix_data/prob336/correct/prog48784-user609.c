#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int c;
	scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a+b>c&&b+c>a&&c+a>b&&a>0&&b>0&&c>0)
       {if(a*a+b*b>c*c&&b*b+c*c>a*a&&a*a+c*c>b*b)
        printf("Acute Triangle");
        else
        printf("Not Acute Triangle");}
    else
    printf("Cannot form a Triangle");
    return 0; }