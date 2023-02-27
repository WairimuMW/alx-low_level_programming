/**
 * swap_int - swaps the values of two integers
 * @*a, @*b: pointers to the integers to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
