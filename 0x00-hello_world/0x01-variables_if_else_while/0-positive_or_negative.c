#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there 
* main - Entry point
* Return : Always 0 (success)
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if n > 0
				then
					echo "$n is positive"
				elseif n < 0
				then
					echo "$n is negative"
				else
					echo "$n is zero"
				return (0);
}
