#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "We are Stdio's Authors";
    char str2[30] = "Worlddd";

    memcpy(str1 + 2, str2, 4);
    printf("%s\n", str1);

    getchar();
}
