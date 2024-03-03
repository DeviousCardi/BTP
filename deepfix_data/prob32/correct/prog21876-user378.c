#include <stdio.h>
#include <stdlib.h>
int main() {
	        int n,i, present=0;
	        scanf("%d\n",&n);
	        int set[n];
	        for (i=0;i<=(n-1);i++) {
	            scanf("%d\n",&set[i]); }
            for (i=1;i<=(n-2);i++) {
                if ((set[0]<set[1])||(set[n-1]<set[n-2]))
                {present=1;
                break;}
                if ((set[i]<set[i-1])&&(set[i]<set[i+1]))
                {present=1;
                break;} }
                if (present==1)
                printf("Yes");
                else
                printf("No");
	return 0; }