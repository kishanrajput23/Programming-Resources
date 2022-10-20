# C Program To Reverse a Number ->

# Program:
#include <stdio.h>;
int reversDigits(int num)
{
	static int rev_num = 0;
	static int base_pos = 1;
	if (num > 0)
	{
		reversDigits(num / 10);
		rev_num += (num % 10) * base_pos;
		base_pos *= 10;
	}
	return rev_num;
}
int main()
{
	int num = 4562;
	printf("Reverse of no. is %d",
			reversDigits(num));
  getchar();
	return 0;
}

# Output:
Reverse of no. is 2654
