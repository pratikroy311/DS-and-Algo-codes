// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the first missing positive 
// number from the given unsorted array 
int firstMissingPos(int A[], int n) 
{ 

	// To mark the occurrence of elements 
	bool present[n + 1] = { false }; 

	// Mark the occurrences 
	for (int i = 0; i < n; i++) { 

		// Only mark the required elements 
		// All non-positive elements and 
		// the elements greater n + 1 will never 
		// be the answer 
		// For example, the array will be {1, 2, 3} 
		// in the worst case and the result 
		// will be 4 which is n + 1 
		if (A[i] > 0 && A[i] <= n) 
			present[A[i]] = true; 
	} 

	// Find the first element which didn't 
	// appear in the original array 
	for (int i = 1; i <= n; i++) 
		if (!present[i]) 
			return i; 

	// If the original array was of the 
	// type {1, 2, 3} in its sorted form 
	return n + 1; 
} 

// Driver code 
int main() 
{ 

	int A[] = { 2, 3, -7, 6, 8, 1, -10, 15 }; 
	int size = sizeof(A) / sizeof(A[0]); 
	cout << firstMissingPos(A, size); 
} 

// This code is contributed by gp6 
