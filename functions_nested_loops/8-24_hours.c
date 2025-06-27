#include "main.h"
#include <unistd.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: Uses write to print every minute in the format HH:MM
 * from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hour, minute;
	char time[6];

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			time[0] = '0' + hour / 10;
			time[1] = '0' + hour % 10;
			time[2] = ':';
			time[3] = '0' + minute / 10;
			time[4] = '0' + minute % 10;
			time[5] = '\n';

			/* Write time and newline */
			write(1, time, 6);
		}
	}
}

