#include <stdio.h>
#include <stdlib.h>
int main() { int count,i,n,j;
            count=0;
            n=0;
            char a[500],b[500];
            while(count!=EOF&&count<500){
                scanf("%c",&a[count]);
                count=count+1;}
            for (i=count-1;i>=0;i--) {
                b[n]=a[i];
                n=n+1; }
           for (j=0;j<count;j++){
               if (a[j]!=b[j]) {printf ("NO"); return 0;} }
            printf ("YES");
	return 0; }