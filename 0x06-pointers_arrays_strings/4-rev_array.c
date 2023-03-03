/**
 * reverse_array - reverses the content of an array of integers
 * @*a: pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int temp, begin, end;

	begin = 0;
	end = n - 1;


	while(begin < end)
	{
		temp = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = temp;
		begin++;
		end--;
	}
}
