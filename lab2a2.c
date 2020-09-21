#include<stdio.h>

// function to find the length of string 
int slen(char str[])
{
	
	
	
	
	

	
return count;
}

// function to compare two strings 
int scmp(char s1[],char s2[])
{
	
}
// function to comapre strings with index 
int scmpi(char s1[],char s2[],int i)
{
	
}
// function to find s2 in s1 
int find(char s1[],char s2[])
{
	
}

void my_s_r(char str[],char ptr[],char rep[],char dest[])
{
	
}
		




void main()
{
	char STR[20]; // main string or text
	char PAT[10]; //Pattern string 
	char REP[10]; // replacement string 
	char DEST[20];
	int f1=0;
	int index=0;

	printf("\n Enter the main string /text:");
	scanf("%s",STR);

	printf("\n Enter the pattern :");
	scanf("%s",PAT);

	printf("\n Enter replace string:");
	scanf("%s",REP);

	printf("\n The Main string is : %s \n The pattern string is :%s \n The replacement string is:%s",STR,PAT,REP);
	
	//index=find(STR,PAT);
	//printf("\n position :%d",index);
	my_s_r(STR,PAT,REP,DEST);
	printf("\n result:%s",DEST);

	
	
}


