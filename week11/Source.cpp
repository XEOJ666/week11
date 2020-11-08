#include<stdio.h>
void getStr(char*);
void node(char*);
int main()
{
	char str[999];
	char* pStr = str;

	getStr(pStr);
	node(pStr);

	return 0;
}
void getStr(char* pA) {
	scanf_s("%[^\n]s", pA, 999);
}


void node(char* pB)
{
	int i = 0;
	int never = 0;
	while (*(pB + i) != '\0')
	{
		if ( (*(pB + i) == 'n' or *(pB + i) == 'N') && (*(pB +i+1) == 'e' or *(pB +i+1) == 'E') && (*(pB +i+2) == 'v' or *(pB +i+2) == 'V') && (*(pB +i+ 3) == 'e' or *(pB +i+ 3) == 'E') && (*(pB +i+ 4) == 'r' or *(pB +i+ 4) == 'R') )
		{
			never++;
		}
		i++;
	}
	printf("%d", never);
	

}
