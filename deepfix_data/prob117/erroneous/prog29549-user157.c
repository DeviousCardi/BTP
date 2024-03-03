#include <stdio.h>
#include <stdlib.h>
long int recursive(int n)
{      if(n==0)
       return 0;
       else
       return 2*(recursive(n-1)+1)-1; }
int main() {int i,t,tot=0,j;
            scanf("%d",&t);
            while(count<t) {
                int p=0;
                scanf("%d",&i);
                for(j=0;j<100;j++) {
                    if (recursive(n)==i) {
                        p=1;
                        printf("yes\n");
                        break; } }
                if(p!=1) {
                    printf("no\n"); }
                tot++ }
	return 0; }