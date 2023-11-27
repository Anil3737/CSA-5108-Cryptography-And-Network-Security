#include<stdio.h>
#include<string.h>
void encrypt(char message[],int key)
{
	int len=strlen(message),row=(len+key-1)/key,m=0;
	char encry[100][100];
	int index=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<key;j++)
		{
			if(m<len)
			{
				encry[i][j]=message[m];
				m++;	
			}
			else
			{
				encry[i][j]='X';
			}
			
		}
	}
	for(int j=0;j<key;j++)
	{
		for(int i=0;i<row;i++)
		{
			if(encry[i][j]!='X')
				printf("%c ",encry[i][j]);
		}
	}
}
int main()
{
	char message[100];
	int key;
	scanf("%s",&message);
	scanf("%d",&key);
	printf("Encryted message is :\n");
	encrypt(message,key);
}
	

