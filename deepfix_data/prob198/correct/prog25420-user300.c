#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[100]={3,5,34,7},i,j,m;
	m=a[0];
    for(i=0;i<4;i++) {
        for(j=i+1;j<4;j++) {
            if(a[j]<a[i]) {
                m=a[j];
                a[j]=a[i];
                a[i]=m; } } }
    for(i=0;i<4;i++)
    printf("%d ",a[i]);
	return 0; }