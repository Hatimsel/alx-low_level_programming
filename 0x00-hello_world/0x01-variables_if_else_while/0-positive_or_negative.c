#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if n > 0 {
						then 
							echo "$n is positive"
					}
					elseif n < 0 {
						then
							echo "$n is negative"
					}
					else {
						echo "$n is zero"
					}
					fi
					return (0);
}
