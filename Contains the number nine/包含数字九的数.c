#include <stdio.h>
int main()
{
	int q = 0, w = 2019, r = 0, t = 0, e = 0;
	for (q = 1; q <= w; q++)
	{
		if (q < 10)
		{
			e++;
			q = 10;
		}
		else
		{
			r = q;
			while (r)
			{
				t = r % 10;
				if (!(t - 9))
				{
					e++;
					break;
				}
				r /= 10;
			}
		}
	}
	printf("%d\n", e);
	return 0;
}