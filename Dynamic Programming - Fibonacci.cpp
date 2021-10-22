#include <iostream>
#include <vector>
using namespace std;
vector <long long> memo(100, -1);

/*fibonacci without memoziation*/
long long fibonacci(int n)
{
	if (n == 1 || n == 2)
		return (1);
	return (fibonacci(n - 1) + fibonacci (n - 2));
}

/*fibonacci with memoziation - dynamic solution*/
long long fibonacci_memo(int n)
{
	memo[0] = 1;
	memo[1] = 1;
	
	if (memo[n] != -1)
		return memo[n];

	memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2);
	
	return memo[n];
}

int main()
{
	int n;
	long long result;

	cout << "Enter n to find the nth term of the fibonacci series: ";
	for (int i = 0; i < 10; i++)
	{
		do //input checking
		{
			cin >> n;
			result = fibonacci_memo(n - 1);
			cout << "result: " << i + 1 << ": " << result << endl << endl;

		} while (n < 0);
	}

	/*recursive function without memoziation*/
	/*result = fibonacci(n);
	cout << result << endl;*/
	/*recursive function with memoziation*/

	return (0);
}
