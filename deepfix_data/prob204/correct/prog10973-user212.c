#include <stdio.h>
#include <stdlib.h>
int main() { int count,i,n;
            count=0;
            n=0;
            char a[500],b[500];
            while(count<=EOF&&count<500){
                scanf("%c",&a[count]);
                count=count+1;}
                printf ("%d",count);
            for (i=count-1;i>=0;i--) {
                b[n]=a[i]; printf ("%c",b[n]);
                n=n+1; }
            printf(" ");
            printf ("%c",b[n-1]);
	return 0; }