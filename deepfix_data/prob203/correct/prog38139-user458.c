#include <stdio.h>
int main() {
int n,i,j,a[n],count=0;
i=0;j=0;
scanf("%d\n",&n);
for(i=0;i<n;i++){
    scanf("%d ",&a[i]); }
for(i=0;i<n;i++){
    for(j>i;j<n;j++){
        if(a[i]==a[j]){
            count=count+1; }
        if(count!=0){printf("NO"); exit(0);}
 else {continue;} } }
	return 0; }