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
    for(i=0;i<n;i++){
        if(a[i]==b[j]){
            j++;
            break;
    if(a[i+j]==b[j]){
                d=1;
                break; }
            }}if(d==1){break;}}
if(d==1){printf("YES");}
else{printf("NO");}
	return 0; }