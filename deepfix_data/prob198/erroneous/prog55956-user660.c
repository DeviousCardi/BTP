#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,a1[20],a2[20],b1[20],k,l,flag=0,x=0,t;
	scanf("%d")
    for(i=0;i<n1;i++)
	    scanf("%d",&a1[i]);
	scanf("%d",&n2);
	for(j=0;j<n2;j++)
	    scanf("%d",a2[j]);
    for(k=0;k<n1;k++) {
            for(l=0;l<n2;l++) {
                    if(a1[k]==a2[l]) {
                            flag=1;
                            break; } }
            if(flag==1) {
                    b[x]=a[k];
                    x++; } }
    for(y=0;y<x-2;y++) {
            if(b[y]<b[y+1]) {
                    t=b[y];
                    b[y+1]=b[y];
                    b[y]=t; } }
    printf("%d",b[x-1]);
	return 0; }