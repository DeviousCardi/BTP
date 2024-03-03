#include <stdio.h>
#include <stdlib.h>
int main() {
	int N1,N2;
	int a1[10];
	int a2[10];
 int min,num,i,j,k;
scanf("%d",&N1);
    for(i=0;i<N1;i++) {
                  scanf("%d",&a1[i]); }
	scanf("%d",&N2);
	for(i=0;i<N2;i++) {
                    scanf("%d",&a2[i]); }
	for(i=0;i<N1;i++){
	                 scanf("%d",&num);
	                 min=num;
	                 for(j=1;j<N1;j++){
	                     scanf("%d",&num);
	                     if(num<min){min=num;}
	                     else continue; }
	                 for(k=0;k<N2;k++){
	                     if(s[k]==min){printf("NO");]
	                     else printf("%d",min);} } }
	return 0; }