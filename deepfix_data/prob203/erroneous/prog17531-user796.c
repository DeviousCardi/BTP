#include <stdio.h>
int main() {
int i,j,n,d=0;
int a[50];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++){
    j=0;
for(j=0;j<n;j++){
    if(a[i]==a[j]){
       d=1; }
    break; }
break;}}
 if(d==1){
printf("yes");}
else {
    printf("no"); }
	return 0; }