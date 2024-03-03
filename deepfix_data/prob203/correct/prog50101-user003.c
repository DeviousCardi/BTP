#include <stdio.h>
int main() {
    int n,i,k,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    i=0;
    while(i<n){
        for(k=1;k<n-i;k++){
            if(a[i]==a[k]){
                flag++; } }
        i++; }
    if(flag==0)printf("NO");
    else(printf("YES"));
	return 0; }