#include <stdio.h>
#include <stdlib.h>
int min(int a,int b){
    return (a>b)?b:a; }
int main() {
int N1,N2,c;
scanf ("%d",&N1);
int a1[25],a2[25];
for(i=0,i<N1;i++){
    scanf("%d",&a1[i]); }
scanf ("%d",&N2);
for(i=0,i<N2;i++){
    scanf("%d",&a2[i]); }
	return 0; }