#include <stdio.h>
int main() {
    int i,j,k,n,d=0,e;
int a[20],b[20];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
for(j=0;j<k;j++)
scanf("%d",&b[j]);
for(j=0;j<k;j++){
    for(i=0;i<n;i++){
        if(a[i]==b[j]){
      j++;
      break;
      e=j+1/j+1;
      if(a[i+e]==b[j]&&j<=n){
                d=1; }
            }}if(d==1){break;}}
if(d==1){printf("YES");}
else{printf("NO");}
	return 0; }