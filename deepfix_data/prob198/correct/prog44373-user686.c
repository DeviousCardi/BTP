#include <stdio.h>
#include <stdlib.h>
int contains(int *p,int *n2,int i){
    for(int j=0;j<*n2;j++){
        if(i==*(p+j)){
            return 1; } }
    return 0; }
int main() {
	int n1,n2;
	scanf("%d",&n1);
	int a1[n1];
	for(int i=0;i<n1;i++){
	    scanf("%d",a1+i); }
	scanf("%d",&n2);
	int a2[n2];
	for(int i=0;i<n2;i++){
	    scanf("%d",a2+i); }
	int min=a1[0];
	for(int i=0;i<n1;i++){
	    if(a1[i]<=min&&(!contains(a2,&n2,a1[i])))
	        min=a1[i]; }
	if(!contains(a2,&n2,min))
	    printf("%d",min);
	else
	    printf("NO");
	return 0; }