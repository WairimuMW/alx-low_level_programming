/**
 * _pow_recursion - finds the result of a number raised to a power
 * @x: number to be raised
 * @y: power
 *
 * Return: @x raised to power @y
 */
int _pow_recursion(int x, int y)
{
	if(y < 0)
		return (-1);
	if(x == 0)
		return (0);
	if(y == 0 || x == 1)
		return (1);
	return(x * _pow_recursion(x, y - 1));
}
