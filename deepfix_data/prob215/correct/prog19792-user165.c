#include <stdio.h>
#include <stdlib.h>
int main() {
	                int i,n;
	                float a,j;
	                scanf("%d",&n);
	                for(i=1;i<=n;i++){
	                    a= n%i;
	                        if (a!=0.0) { break; }
	                           j=0.0;
	                        if (a==0.0){
	                            j=j+a;
	                            if (j=n) {
	                            printf("YES"); } }
	                        else { printf("NO"); } }
	return 0; }