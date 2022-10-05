#include "main.h"
#include <stdio.h>
/**
 *-islower - function
 */

int _islower(int c)
{
	if (  c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
