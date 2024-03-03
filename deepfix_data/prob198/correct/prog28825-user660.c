#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,a1[20],a2[20],b[20],k,l,flag=0,x=0,t,i,j,y;
	scanf("%d",&n1);
    for(i=0;i<n1;i++)
	    scanf("%d",&a1[i]);
	scanf("%d",&n2);
	for(j=0;j<n2;j++)
	    scanf("%d",&a2[j]);
    for(k=0;k<n1;k++) {
            for(l=0;l<n2;l++) {
                    if(a1[k]==a2[l]) {
                            flag=1;
                            break; } }
            if(flag==0) {
                    b[x]=a1[k];
                    x++; } }
    printf("%d%d%",b[0],b[1]);
    if(x==0)
        printf("NO");
    else {
            for(y=0;y<=x-2;y++) {
                    if(b[y]<b[y+1]) {
                            t=b[y];
                            b[y+1]=b[y];
                            b[y]=t; } }
            printf("%d",b[x-1]); }
	return 0; }