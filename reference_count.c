#include <stdio.h>
#include <stdlib.h>
#include "clstring.h"



int main(int argc, char const *argv[])
{
	String *str = string_new("hello salamander!");
	String *str2 = string_new("hello!");
	string_assign(&str2, &str);
	printf("%s\n", str->buf);
	free(str);
	return 0;
}