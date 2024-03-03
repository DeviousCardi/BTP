#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1;
    scanf("%d\n",&n1);
    int a[20];
    scanf("%d",&a[0]);
    for(int i=1;i<n1;i++) {
        scanf("%d\n",&a[i]); }
    int n2;
    scanf("%d\n",&n2);
    int b[20];
    for(int i=0;i<n2;i++) {
    scanf("%d\n",&b[i]); }
    int t;
    int p=0;
    int s=0;
    int c[20];
    for(int i=0;i<n1;i++) {
        t=0;
        for(int j=0;j<n2;j++) {
            if(a[i]!=b[j]) {
                t=t+1; } }
          if(t==n2) {
              c[s]=a[i];
              p=p+1;
              s=s+1; } }
    int min=c[0];
    if(p==0)
    printf("NO");
    else {
        for(int i=0;i<s;i++) {
          if(min>c[i])
          min=c[i]; }
          printf("%d",min); }
	return 0; }