// The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate span of stock’s price for all n days.
// The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
// For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}

// C++ program for a linear time solution for stock
// span problem without using stack
#include <iostream>
#include <stack>
using namespace std;

// An efficient method to calculate stock span values
// implementing the same idea without using stack
void calculateSpan(int A[], int n, int ans[])
{
	// Span value of first element is always 1
	ans[0] = 1;

	// Calculate span values for rest of the elements
	for (int i = 1; i < n; i++) {
		int counter = 1;
		while ((i - counter) >= 0 && A[i] >= A[i - counter]) {
			counter += ans[i - counter];
		}
		ans[i] = counter;
	}
}

// A utility function to print elements of array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver program to test above function
int main()
{
	int price[] = { 10, 4, 5, 90, 120, 80 };
	int n = sizeof(price) / sizeof(price[0]);
	int S[n];

	// Fill the span values in array S[]
	calculateSpan(price, n, S);

	// print the calculated span values
	printArray(S, n);

	return 0;
}
