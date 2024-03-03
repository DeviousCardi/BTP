#include <stdio.h>
int main() {
    int i,j,k,n,d=0,t;
int a[20],b[20];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
for(j=0;j<k;j++)
scanf("%d",&b[j]);
for(j=0;j<k;j++){
    if(a[i]==b[0]){
    t=i;
    while(j<n){
   for(i=t;i<n;i++){
      if(a[i]==b[j]){
                d=1;
                j++;
            }}
if(d==1){printf("YES");}
else{printf("NO");}
	return 0; }