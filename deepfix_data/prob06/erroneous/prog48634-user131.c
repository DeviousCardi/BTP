#include <stdio.h>
#include <stdlib.h>
int main() {int n,m,x,y;
scanf("%d",&n);
scanf("%d",&m);
scanf("%d",&x);
scanf("%d\n",&y);
	int *s1;
	s1=(int*)malloc(sizeof(int)*n);
	int* s2;
	s2=(int*)malloc(sizeof(int)*m);
	int p=0,r=0;int c=0;
		while(p!=n&&r!=m) {
	    if(s1[p]-x<=s2[r]<=s1[p]+y) {
	      c++;  p++;r++;
	    }else if(s2[r]<s1[p]-x) {
	        r++;
	    }else
	    p++;}
	    printf("%d",c);
	    p=0,r=0;
	while(p!=n&&r!=m) {
	    if(s1[p]-x<=s2[r]<=s1[p]+y) {
	        printf("%d %d",p+1,r+1);p++;r++;
	    }else if(s2[r]<s1[p]-x) {
	        r++;
	    }else
	    p++;} }
	return 0; }