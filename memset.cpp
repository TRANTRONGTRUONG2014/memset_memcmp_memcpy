#include <string.h>
//#include <stdio.h>
#include <iostream>

int main()
{
	char str[30]= "tran trong truong gtvt"; 
	printf("%s \n ",str);
	printf("length of str = %d\n",sizeof(str)); //in ra kich thuoc cua chuoi str
	memset(str+3,'o',10); // thay the ky tu o trong khoang tu [10:3]
	std::cout<< str;
	getchar();
}
