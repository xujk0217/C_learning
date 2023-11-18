#include<stdio.h>
int main(){
	int grade;
	int c=1;
	FILE *fout;//link-type(pointer)FILE variable
	fout=fopen("the.txt","w");//create a link to a file /*w:writing mode a:appending mode r:reading mode*/
	fprintf(fout,"this is a text txt.");
	fclose(fout);//close  the link to file
	return 0;}
	