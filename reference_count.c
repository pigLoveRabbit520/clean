#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	unsigned int len;
	int refcount;
	char buf[];
}String;

String* new_string(const char *s)
{
	size_t len = strlen(s);
	String *str = (String *)malloc(sizeof(String) + len + 1);
	str->len = len;
	str->refcount = 1; // 默认为1
	strncpy(str->buf, s, len + 1);
	return str;
}

int main(int argc, char const *argv[])
{

	return 0;
}