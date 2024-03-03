#include <stdio.h>
	int dup(int n,int a[]) {
	    int i,j,c=0;
	    for(i=0;i<n;i++) {
	        for(j=i+1;j<n;j++) {
	            if(a[i]==a[j])
	            c+=1; } }
	    if(c>0)
	        return 1;
	    else
	        return 0; }
	int main() {
	    int n,m,i;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++) {
	        scanf("%d",a[i]); }
	    m=dup(n,a)
	    if(m==1)
	        printf("Yes");
	    else
	        printf("No"); }
	return 0; }