#include <stdio.h>
#include <stdlib.h>
int main() {
	                int i,j,n;
	                float a;
	                scanf("%d",&n);
	                j=0;
	                for(i=1;i<=n;i++){
	                    a= n%i;
	                        if (a==0.0){
	                            printf("%d\n",j); }
	                        else { printf("NO"); } }
	return 0; }