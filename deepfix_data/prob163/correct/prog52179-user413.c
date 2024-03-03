#include <stdio.h>
#include <stdlib.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
	int a,b,i;
	char s1[600];
	char s2[600];
	char s3[600];
	int count=0;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=0;i<a;i++) {
	    if(a>b) {
	        scanf("%c\n",&s1[i]); }
	    else {
	        if(i<b-a) {
	            s1[i]='0'; }
	        else {
	            scanf("%c\n",&s1[i]); } } }
	for(i=0;i<b;i++) {
	    if(b>a) {
	        scanf("%c\n",&s2[i]); }
	    else {
	        if(i<a-b) {
	            s2[i]='0'; }
	        else {
	            scanf("%c\n",&s2[i]); } } }
	for(i=max(a,b)-1;i>=0;i--) {
	    if(s1[i]+s2[i]+count>'9') {
	        s3[i]=s1[i]+s2[i]-'10';
	        count=count+1; }
	    else {
	        s3[i]=s2[i]+s1[i]; } }
	return 0; }