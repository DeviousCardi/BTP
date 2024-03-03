#include <stdio.h>
int main() {
int n,i,j,a[n],f=0;
scanf("%d\n",&n);
for(i=0;i<n;i++){
    scanf("%d ",&a[i]); }
for(i=0;i<n;i++){
    for(j>i;j<n;j++){
        if(a[i]!=a[j])
            f=1;
            else
            f=0;} }
if (f==1){printf("YES");}
else if(f==0){printf("NO");}
	return 0; }