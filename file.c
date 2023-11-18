#include<stdio.h>
int main(){
	int grade,sum=0,average;
	int c=1,i;
	FILE *finput;
	finput = fopen("the.txt","r");
	while(c<=10)
	{
	fscanf(finput,"%d %d",&i,&grade);
	printf("Enter grade %d\n",i);
	sum=sum+grade;//print to fout(Grade.txt)
    printf("%d\t%d\n",sum ,grade);
	c=c+1;
	}
    printf("%d\t", sum);
    int av = sum/10;
    printf("%d", av);
    //average=sum/10;
	//printf("%d %d",sum,average);
	FILE *fout;
	fclose(fout);//close  the link to file
	return 0;
}