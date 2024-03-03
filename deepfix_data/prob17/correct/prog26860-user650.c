#include <stdio.h>
int main() {
    int i,j,l,m,n1,n2;
	scanf("%d\n",&n1);
	int a[n1];
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("\n");
	scanf("%d\n",&n2);
	int b[n2];
	for(j=0;j<n2;j++)
	scanf("%d",&b[n2]);
	for(i=0;i<n1;i++){
	    for(j=0;j<n2;j++){
	        if(a[i]==b[j])
	        break; }
	   for(m=i;m<n1;m++){
	   for(l=j;l<n2;l++){
	           if(a[l]!=b[m])
	           printf("No");
	           else
	        {printf("g");}
	   }} }
	return 0; }