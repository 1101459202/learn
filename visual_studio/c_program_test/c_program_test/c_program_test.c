#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
float fgloab_variable;

struct _test {
	int *a;
}ptest;

struct _testStruct {
	int a;
}Stest;
int main(int argv, char *argc[])
{
	float flocal_variable;

	int a = 0;

	printf("Stest = %p, Stest.a = %p\n",&Stest, &Stest.a);
	printf("ptest =%p, ptest.a = %p\n", &ptest, &ptest.a);

	if (!0)
	{
		puts("OK!");
	}
	for(int i = 0 ; i < 8 ;i++)
	putchar('\a');
	putchar('\\');
	putchar('%%');
	putchar('\?');
	putchar('\'');
	putchar('\"');
	putchar(10);
	system("pause");
}