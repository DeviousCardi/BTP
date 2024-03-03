#include <stdio.h>
#include <stdlib.h>
int main() { int count=0;
             int i,n;
            a[],b[];
            while(count!=EOF) {
                scanf("%d",a[count]);
                count=count+1; }
            n=count-1;
            i=count-1;
            while (i>=0)
            { b[count-i]=a[i];
            i--;}
            for(i=0;i<=n;i++) {
                if (a[i]!=b[i]) {printf("NO"); return 0;} }
            printf("YES")
	return 0; }