#include <stdio.h>
#include <stdlib.h>
int main() {
	        int n,i;
	        scanf("%d\n",&n);
	        int set[n];
	        for (i=0;i<=(n-1);i++) {
	            scanf("%d\n",&i); }
	        for (i=1;i<=(n-2);i++) {
	            if ((set[i]<set[i-1])&&(set[i]<set[i+1]))
	            printf("Yes");
	            break; }
	        if (set[0]<set[1])
	        printf("Yes");
	        if (set[n-1]<set[n-2])
	        printf("Yes");
	return 0; }