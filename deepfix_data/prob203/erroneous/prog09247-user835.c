#include <stdio.h>
int douche(int a) {
    int sum=0;
    int dopa[50];
    for(int i=0;i<a;i++) {
        scanf("%d",&dopa[i]); }
    for(j=0;j<a;j++) {
        for(k=2;k<50;k++) {
            if(dopa[j]/k==1) {
            sum=sum+1; }
            else {
                continue; } } }
    return(sum); }
int main() {
    scanf("%d",&num);
	h=douche(num);
	if(h>num) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }