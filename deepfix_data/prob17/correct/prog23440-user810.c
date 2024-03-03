#include <stdio.h>
int main() {
int a1[100],a2[100];
int i,n1,n2,j,s=0,m=0;
scanf("%d",&n1);
for(i=0;i<n1;i++) {
        scanf("%d",&a1[i]); }
scanf("%d",&n2);
for(i=0;i<n2;i++) {
        scanf("%d",&a2[i]); }
for(i=0;i<n2;i++) {
        for(j=0;j<n1;j++) {
                if(a2[i]==a1[j]) {
                        s=i;
                        m=j;
                        break; } }
        if(s==i&&m==j)
        break; }
i=s;j=m;
while(i<n2) {
        if(a2[i+1]==a1[j+1])
        s++;i++;j++; }
if(s+1==n2) {
        printf("Yes"); }
else {
        printf("NO"); }
	return 0; }