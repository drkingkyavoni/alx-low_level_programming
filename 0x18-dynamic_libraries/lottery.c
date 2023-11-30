#include <stdio.h>

int rand(void)
{
	static int items[] = argv;
	static int i;

	if (i < sizeof(items)/sizeof(items[0]))
	{
		int x = items[i];
		i++;
		return x;
	}

	return (0);
}