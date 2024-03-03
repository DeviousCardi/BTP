#include<stdio.h>
#include<limits.h>
int main() {
    int n,temp=INT_MIN,a[20],i,j,count[20];
    scanf("%d",n);
    for(i=0;i<n;i++)
        scanf("%d",a[i]);
    for(i=0;i<n;i++) {
            temp=INT_MIN;
            count[i]=0;
            j=0;
            while(j<n) {
                  if(temp<a[j]) {
                        temp=a[i];
                        count[i]++; }
                    j++; } }
    return 0; }