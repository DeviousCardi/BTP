#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,count;
	int a[100];
	count=0;
        for(i=0;i<100;i++) {
            scanf("%d",&a[i]);
            if(a[i]!=(0||1||2||3||4||5||6||7||8||9)) {
            count = i ;
            printf("%d",count); } }
	return 0; }