#include <stdio.h>
int douche(int a) {
    int sum=0;
    int dopa[50];
    for(int i=0;i<a;i++) {
        scanf("%d",&dopa[i]); }
    for(int j=0;j<a;j++) {
        for(int k=0;k<a;k++) {
            if(dopa[j]==dopa[k]) {
            sum=sum+1; }
            else {
                continue; } } }
    return(sum); }
int main() {
    int num,h;
    scanf("%d",&num);
	h=douche(num);
	if(h>num) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }