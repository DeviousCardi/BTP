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
    if(a[i]==b[0]&&i==n-1){
        d=1;
    }}
if(d==1){printf("YES");}
else{printf("NO");}
	return 0; }