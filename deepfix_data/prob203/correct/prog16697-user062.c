#include <stdio.h>
int main() {
    int i,j,n,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j] && i!=j){
                x++; } } }
    if (x==0)
    printf("NO");
    else printf("YES");
	return 0; }