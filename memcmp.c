
#include <string.h>
#include <stdio.h>

#define index 7
int main()
{
	char *str1 = "tran trong truong";
	char *str2 = "tran van truong";
	int value;

	printf("%s\n",str1);
	printf("%s\n",str2);

	printf("byte/vi tri so sanh = %d\n",index);
	value = memcmp(str1,str2,index);
	if(value)
	{
		puts("str1 > str2");
	}
	else if(value == 0)
	{
		puts("str1 = str2");
	}
	else
	{
		puts("str1 < str2");
	}
	getchar();
}
