#include <stdio.h>
int main() {
int n,i,j,m=0,s=0;
scanf("%d",&n);
int a[n+1];
for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
                if(a[i]==a[j])
                m++; }
            if(m==a[i])
            s++;
            m=0; }
if(s==n)
printf("Yes");
else
printf("No");
return 0; }
    return 0; }