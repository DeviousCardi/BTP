#include <stdio.h>
#include <stdlib.h>
int main() {
	int a1[20],a2[20],i,flag=0;
	for(i=0;1<n1;i++) {
	    scanf("%d",&a1[i]); }
	int min=a1[1];
	for(i=1;i<n1;i++)
	if(a1[i]<min)
	min=a1[i];
	printf("%d",min);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	for(i=0;i<n2;i++) {
	    if(a2[i]==min)
	    flag=1; }
	if(flag==1)
	printf("YES");
	else
	printf("NO");
	return 0; }