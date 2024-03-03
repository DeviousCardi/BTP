#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,count,n;
	int a[100];
	scanf("%d",&a[100]);
    a[100]=n;
    if(n>=0&&n<=9) {
        count=1; }
    if(n>=10&&n<=99) {
        count=2; }
    if(n>=100&&n<=999) {
        count=3; }
    if(n>=1000&&n<=9999) {
        count=4; }
    if(n>=10000&&n<=99999) {
        count=5; }
    if(n>=100000&&n<=999999) {
        count=6; }
    if(n>=1000000&&n<=9999999) {
        count=7; }
    if(n>=10000000&&n<=99999999) {
        count=8; }
    if(n>=100000000&&n<=999999999) {
        count=9; }
    if(n>=1000000000&&n<=9999999999) {
        count=10; }
    printf("%d",a[100]);
	return 0; }