#include <stdio.h>
int main() {
int n1,n2,i,j,c=0,k,l;
scanf("%d"&n1);
int a[n1];
for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
scanf("%d",&n2);
int b[n2]
for(j=0;j<n2;j++)
    scanf("%d",&b[j]);
for(l=0;l<=(n1-n2);l++) {
    if(a[l]==b[0]){
     for(k=l;k<l+n2;k++) {
            if(a[k]==b[k-l])
            c=c+1;
        else
        continue; }
        if(c==n2) {
        printf("YES");
        break; } } }
    if(c!=n2)
    printf("NO");
	return 0; }