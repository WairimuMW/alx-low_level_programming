/*
 * _abs - function that computes the absolute value of an integer
 * Return: an integer
 */

int _abs(int num)
{
	if(num < 0)
	{
		num *= -1;
	}
	return num;
}
