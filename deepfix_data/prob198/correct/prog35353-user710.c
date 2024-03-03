#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j;
    int swap;
    int a[20],b[20];
    int n1,n2;
    scanf("%d",&n1);
    for(i=0;i<n1;i++){scanf("%d",&a[i]);}
    scanf("%d",&n2);
    for(i=0;i<n2;i++){scanf("%d",&b[i]);}
    for(i=0;i<n1;i++){
        j=0;
        for(j=0;j<n2;j++){
            if(a[i]<a[j]){
              swap=a[i];
              a[i]=a[j];
              a[j]=swap; } } }
	return 0; }