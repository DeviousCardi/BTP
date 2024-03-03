#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[503],b[503];
	int na,nb,car=0;
	scanf("%d%d",na,nb);
	for(i=0;i<na;i++) {
	    a[i]=getchar();
	    a[i]=a[i]='0'; }
	for(j=0;j<nb;j++) {
	    b[j]=getchar();
	    b[j]=b[j]-'0'; }
	i--;j--;
	while((i>=0)&&(j>=0)) {
	    c[k]=(a[i]+b[j]+car)%10;
	    car=(a[i]+b[j]+car)/10;
	    k++;i--;j--; }
	while(i>=0) {
	    c[k]=(a[i]+car)%10;
	    car=(a[i]+car)/10;
	    k++;i--; }
	while(j>=0) {
	    c[k]=(b[j]+car)%10;
	    car=(b[j]+car)/10;
	    k++;j--; }
	if(car) {
	    printf("%d",car); }
	for(i=k-1;i>=0;i--) {
	    printf("%d",c[i]); }
	return 0; }