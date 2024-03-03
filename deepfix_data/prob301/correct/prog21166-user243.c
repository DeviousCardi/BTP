#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[100];
    int b[100];
    int m,i,j,c;
    scanf("%d\n",m);
    for(i=0;i<m;i++) {
        scanf("%d",a[i]);b[i]=-1; }
    for(i=0;i<m;i++)
    {c=0;
    if(b[i]!=0)
       { for(j=0;j<m;j++) {
            if(a[i]==a[j])
          {  b[j]=0;c++;} }
        b[i]=c;printf("%d",b[i]); } }
    for(i=m;i>=0;i++) {
    if(b[i]>1) {
    printf("%d",b[i]);
    break; } }
	return 0; }