#include <stdio.h>
#include <stdlib.h>
void swap(int a,int b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp; }
int main() {
    int n;
    scanf("%d",&n);
    int A[100];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }int t=0;
    for(i=0;i<n;i++){
        if(A[i]!=A[n-i-1])
        t++; }
    if(t>0)
     printf("No");
     else printf("Yes");
	return 0; }