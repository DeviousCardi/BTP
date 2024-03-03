#include <stdio.h>
#include <stdlib.h>
int main() {
    int N1,N2;
    scanf("%d\n",&N1);
    int a[N1+1],i,j;
    for (i=0;i<N1;i++) {
        scanf("%d\n",&a[i]); }
    scanf("%d\n",&N2);
    int b[N2+1];
    for (i=0;i<N2;i++) {
        scanf("%d\n",&b[i]); }
    b[N2]=0;a[N1]=0;
    int min=a[0];
    for (i=0;i<N1;i++) {
        if (a[i]<min&&
        for (j=0;j<N2;j++) {
            if(a[i]==b[j]&&min==a[i]) {
                min=a[i+1]; }
        }) {
            min=a[i]; } }
    if (min==0) printf("NO");
    else printf("%d",min);
	return 0; }