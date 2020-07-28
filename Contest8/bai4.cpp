// C++ program to find min sum of squares 
// of characters after k removals 
#include <bits/stdc++.h> 
using namespace std;
// Main Function to calculate min sum of 
// squares of characters after k removals 
long long minStringValue(string str, int k) 
{ 
	int l = str.length(); // find length of string 

	// if K is greater than length of string 
	// so reduced string will become 0 
	if (k >= l) 
		return 0; 

	// Else find Frequency of each character and 
	// store in an array 
	int frequency[26] = {0}; 
	for (int i=0; i<l; i++) 
		frequency[str[i]-'A']++; 

	// Push each char frequency into a priority_queue 
	priority_queue<int> q; 
	for (int i=0; i<26; i++) 
		q.push(frequency[i]); 

	// Removal of K characters 
	while (k--) 
	{ 
		// Get top element in priority_queue, 
		// remove it. Decrement by 1 and again 
		// push into priority_queue 
		long long temp = q.top(); 
		q.pop(); 
		temp = temp-1; 
		q.push(temp); 
	} 

	// After removal of K characters find sum 
	// of squares of string Value 
	long long result = 0; // Initialize result 
	while (!q.empty()) 
	{ 
		long long temp = q.top(); 
		result += temp*temp; 
		q.pop(); 
	} 

	return result; 
} 

// Driver Code 
main() 
{ 
	int test;
	cin >> test;
	while(test--){
		int k;
		cin >> k;
		string str;
		cin >> str;
		cout << minStringValue(str, k) << endl; 
	}
} 

