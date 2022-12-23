#include "functions.h"
#include "shell.h"
/**
  * _printenv - print environment
  *
  */
void _printenv(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		write(1, environ[i], strlen(environ[i]));
		write(1, "\n", 1);
		i++;
	}
}
