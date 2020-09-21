#include<stdio.h>

// function to find the length of string 
int slen(char str[])
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		count=count+1;
		i=i+1;
	}
	return count;

}

// function to compare two strings 
int scmp(char s1[],char s2[])
{
	int n1,n2,i,j=0;
	n1=slen(s1); // length of s1
	n2=slen(s2); // length of s2
	for(i=0;i<n1;i++)
	{
		if(s1[i]==s2[i])
		{
			j=j+1;
		}
	}
	if(j==n1)  // j is comparing with length of s1 and s2
	{
		return 1;    // if equal it will return 1
	}
	else
	{
		return -1;   // otherwise retuen-1
	}
}
// function to comapre strings with index 
int scmpi(char s1[],char s2[],int i)
{
	int j=0,k,n1,n2;
	n1=slen(s1);
	n2=slen(s2);
	for(k=0;k<n2;k++)
	{
		if(s1[i+k]==s2[k])
			j=j+1;
	}
	if(j==n2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
// function to find s2 in s1 
int find(char s1[],char s2[])
{
	int i=0;
	int n1,n2;
	n1=slen(s1); // length of s1(STR)
	n2=slen(s2);  // length of s2(PTR)
	int flag=0;
	while(i<n1-n2)
	{
		flag=scmpi(s1,s2,i);
		if(flag==1)
		{
			return i;
		}
		i=i+1;
	}
	printf("flag=%d",flag);
	return -1;
}

void my_s_r(char str[],char ptr[],char rep[],char dest[])
{
	int i=0,j=0,k=0;
	int n1,n2,n3;
	int flag=0;
	n1=slen(str);
	n2=slen(ptr);
	n3=slen(rep);
	while(i<n1-n2)
	{
		flag=scmpi(str,ptr,i);
		if(flag==1)
		{
			// copy char in mainstring to destination string (til i)
			while(i>j)
			{
				dest[k]=str[j];
				k++;
				j++;
			}
			// coping chracter from replcament string to destination string 
			j=0;
			while(j<n3)
			{
				dest[k]=rep[j];
				k++;
				j++;
			}
			i=i+n2;
			j=i;
		}
		else
		{
			i++;
		}
	}
		while(j<n1)
		{
			dest[k]=str[j];
			j++;
			k++;
		}
		dest[k]='\0';
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


