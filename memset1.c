#include <stdio.h>
#include <string.h>
int main()
{
	char buf[4096] = "sfdfdfd dfdfd dfdfd";
	printf("%s\n",buf);
	
	printf("xoa toan bo ky tu trong buffer");
	memset(buf,'\0',sizeof(buf)); //xoa toan bo ky tu
	printf("%s\n",buf);
	getchar();
}
