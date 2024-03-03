#include <stdio.h>
int main() {
	int a,i,j,N1,flag=0;
	    scanf("%d\n",&N1);
	int A1[N1];
	for(i=0;i<N1;i++) {
	    scanf("%d ",&A1[i]);
	    printf("\n");
	 int N2;
	    scanf("%d\n",&N2);
	 int A2[N2];
	   for(j=0;j<N2;j++) {
	      scanf("%d ",&A2[j]);
	      for(a=0;a<=i;a++) {
	            if(A1[i]==A2[j+1])
	            flag=1; } } }
	if(flag==1)
	   printf("YES");
	else
	   printf("NO");
	return 0; }