#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	unsigned int len;
	int refcount;
	char buf[];
}String;

String* string_new(const char *s);
void string_assign(String **one, String **two);