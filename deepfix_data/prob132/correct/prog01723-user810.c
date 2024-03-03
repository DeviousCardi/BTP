#include <stdio.h>
int main() {
int n,i,j,m=1,s=0,p=0,k;
scanf("%d",&n);
int a[n+1];
for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
for(i=0;i<n;i++)
    {   for(k=i-1;k>=0;k++) {
            if(a[i]==a[k]) {
               p++; } }
        if(p>1)
        printf("%d",p);
        continue;
        for(j=i+1;j<n;j++) {
                if(a[i]==a[j]) {
                    m++; }
                else
                continue; }
            if(m==a[i])
            s++;
           m=0; }
if(s==n)
printf("Yes");
else
printf("No");
return 0; }