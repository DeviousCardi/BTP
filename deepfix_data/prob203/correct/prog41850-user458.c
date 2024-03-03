#include <stdio.h>
int main() {
int n,i,j,a[n],f=1;
scanf("%d\n",&n);
for(i=0;i<n;i++){
    scanf("%d ",&a[i]); }
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]!=a[j])
            f=1;
            else
            f=0;
         if(f==0){printf("YES"); return 0;} } }
if (f==1){printf("NO");}
	return 0; }