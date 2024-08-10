//for (x = 0; x < n; x++)
//	{
//		z = va_arg(np, int);
//		if (z < 0)
//		{
//			z = -(z);
//			_putchar('-');
//		}
//		if (z > 999)
//		{
//			_putchar((z / 1000) + '0');
//			_putchar(((z / 100) % 10) + '0');
//			_putchar(((z / 10) % 10) + '0');
//			_putchar((z % 10) + '0');
//		}
//		else if (z > 99)
//		{
//			_putchar(((z / 100) % 10) + '0');
//			_putchar(((z / 10) % 10) + '0');
//			_putchar((z % 10) + '0');
//		}
//		else if (z > 9)
//		{
//			_putchar(((z / 10) % 10) + '0');
//			_putchar((z % 10) + '0');
//		}
//		else
//			_putchar(z + '0');
//
//		if ((x < (n - 1)) && (separator != NULL))
//		{
//			y = 0;
//			while (separator[y] != '\0')
//			{
//				_putchar(separator[y]);
//				y++;
//			}
//		}
//
//	}
