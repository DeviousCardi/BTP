#include <stdio.h>
#include <stdlib.h>
int main() {
	                int a,i,j,n;
	                scanf("%d",&n);
	                j=0;
	                for(i=1;i<=n;i++){
	                    a= n%i;
	                        if (a==0){
	                            j=j+a;
	                            printf("%d\n",j); }
	                        else { printf("NO"); } }
	return 0; }