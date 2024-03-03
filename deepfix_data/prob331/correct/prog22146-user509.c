# include <stdio.h>
int main() {
int a,n,i,j,flag=0,tree=0;
scanf("%d",&n);
for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
        scanf("%d",&a);
        if(i==j&&a==1) {
            flag++; }
        if(i!=j&&a==0) {
            tree++; } } }
if (flag>0&&tree>0) printf("yes");
else printf("no");
return 0; }