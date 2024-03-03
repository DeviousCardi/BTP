#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	                int i,n;
	                float a,j=0;
	                scanf("%d",&n);
	                if (n<=pow(10,8)) {
	                for(i=1;i<=n;i++){
	                    a= n%i;
 	                        if (a!=0.0)  break;
	                   else if (a==0.0){
	                            j=j+a;
	                            if (j==n) {
	                            printf("YES"); } }
	                        else { printf("NO"); } } }
	return 0; }