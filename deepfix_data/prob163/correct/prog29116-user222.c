#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,a,b;
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n1<10||n2<10) {
	    scanf("%d",&a);
	    scanf("%d",&b);
	    printf("%d",a+b); }
	else {
	char ar1[n1],ar2[n2];
	int ar3[n1];
	for(i=0;i<=n1;i++) {
	    scanf("%c",&ar1[i]); }
		for(i=0;i<=n2;i++) {
	    scanf("%c",&ar2[i]); }
      for(i=0;i<n1;i++) {
          if(ar2[n1-1-i]-ar1[n1-i-1]>=9)
        {  ar3[n1-i]='1'; ar3[n1-1-i]='0';}
        else {
          ar3[n1-i-1]=(int)ar1[n1-1-i]+(int)ar2[n1-i-1]; } }
	for(i=0;i<n1;i++) {
	    printf("%c",ar3[i]-40); } }
	return 0; }