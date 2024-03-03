#include <stdio.h>
int n,k,a[30];
int search(int c,int b,int i) {
    if(c==k||b==k) return 1;
    else if (i==n) return 0;
    else {
        return search(c+a[i],b,i+1)||search(c,a[i]+b,i+1); } }
int main() {
scanf("%d%d",&n,&k);
int i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int y=search(0,0,0);
   if(y==0) printf("NO");
   else printf("YES");
    return 0; }