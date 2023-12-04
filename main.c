#include "main.h"

int main()
{
	int len;
	int len2;

	_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
	_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
}
