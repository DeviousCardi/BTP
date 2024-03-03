#include <stdio.h>
#include <stdlib.h>
int main() {
int n1;
scanf("%d",&n1);
int a[20];
for(int i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
int n2;
scanf("%d",&n2);
int b[20];
for(int i=0;i<n2;i++) {
        scanf("%d",&b[i]); }
int min=a[0];
for(int i=1;i<n1;i++) {
        if (a[i]<min)
            min=a[i]; }
int flag=0;
for(int i=0;i<n2;i++) {
        if(b[i]==min)
            flag++; }
if (flag==0)
    printf("%d",min);
else
    printf("NO");
	return 0; }