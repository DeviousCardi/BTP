#include <stdio.h>
int main() {
int N1,N2,i,j,m=0,count;
scanf("%d \n",&N1);
int A1[N1];
for(i=0;i<N1;i++)
scanf("%d ",&A1[i]);
scanf("%d \n",&N2);
int A2[N2];
for(i=0;i<N2;i++)
scanf("%d ",&A2[i]);
for(i=0;i<N1;i++) {
  if(A2[0]==A1[i]) {
      m=i;
      break; } }
	for(i=m;i<(m+N2);i++) {
	    for(j=0;j<N2;j++) {
	        if(A1[i]!=A2[j])
	        count=count+1; } }
if (count==1)
printf("NO");
else
printf("YES");
	return 0; }