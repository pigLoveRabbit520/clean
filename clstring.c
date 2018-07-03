#include "clstring.h"

// TODO: thread safety
static void ref_dec(String *str)
{
	if (str)
	{
		str->refcount--;
		if (str->refcount == 0)
		{
			free(str);
		}
	}
}

// TODO: thread safety
static void ref_inc(String *str)
{
    if (str)
    {
        str->refcount++;
    }
}

String* string_new(const char *s)
{
	size_t len = strlen(s);
	String *str = (String *)malloc(sizeof(String) + len + 1);
	str->len = len;
	str->refcount = 1; // 起始为1
	strncpy(str->buf, s, len + 1);
	return str;
}

// eg: one = two
void string_assign(String **one, String **two)
{
    ref_dec(*one);
	*one = *two;
	ref_inc(*two);
}
