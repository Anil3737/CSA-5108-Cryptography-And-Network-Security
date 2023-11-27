#include<stdio.h>
#include<string.h>
int en[100][100],m[100][100],msg[100];
char ms[100];
void getkeymatrix()
{
	printf("Enter message: ");
	scanf("%s",&ms);
	for(int i=0;i<strlen(ms);i++)
	{
		msg[i]=ms[i]-65;
	}
	for(int i=0;i<strlen(ms);i++)
	{
		for(int j=0;j<strlen(ms);j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
}
void encryption()
{
   	int i, j, k,n,o;
   	for(i = 0,n=0; i < strlen(ms); i++,n++)
   	for(j = 0; j < strlen(ms); j++)
   	for(k = 0,o=0; k < strlen(ms); k++,o++)
   		en[i][j] = en[i][j] + m[n][k] * msg[k];
   	for(i = 0; i < strlen(ms); i++)
	   {
   		printf("%c ",(en[i][0]%26)+65);
	}
}

int main(){
	getkeymatrix();
	encryption();
}








