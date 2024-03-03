#include <stdio.h>
int main() {
    int n,i=0,j=0,temp,flag=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++)
            if(a[i]<a[i+1]){
                temp=a[i]; a[i]=a[i+1]; a[i+1]=temp; } }
	for(i=0;i<n;i++)
	    if(a[i]==a[i+1]) flag=1;
    if(flag==0) printf("NO");
    else printf("YES");
	return 0; }