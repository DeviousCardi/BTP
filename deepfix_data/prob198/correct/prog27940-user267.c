#include <stdio.h>
#include <stdlib.h>
int main() {
int n1, i, a1, j, count = 0, m;
    scanf("%d",&n1);
int a[n1];
        for(i = 0; i < n1 ;i++)
             scanf("%d", &a[i]);
   int n2;
scanf("%d",  &n2);
   int b[n2];
           for(i = 0; i < n2 ; i++)
                 scanf("%d",&b[i]);
 for (i = 0; i < n1; ++i) {
        for (j = i + 1; j < n1; ++j) {
            if (a[i] > a[j]) {
                a1 =  a[i];
                a[i] = a[j];
                a[j] = a1; } } }
for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
              if(a[i] != b[j]) {
               count = count + 1;
               m = a[i]; } }
         if(count == n2) break;
         else continue; }
if(count == n2) printf("%d",m);
else printf("NO");
	return 0; }