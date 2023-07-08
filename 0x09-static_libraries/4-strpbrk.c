#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *strbrk(char *s, char *accept)

{
	return strpbrk(s, accept);
}
