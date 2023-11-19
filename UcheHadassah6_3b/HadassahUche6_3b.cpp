/*b) Re-write the above exercise with a function: Write a function called IsPalindrome 
which takes as a parameter a string and returns true (i.e. 1) if the string is a 
palindrome. Write a main program to test your function with a user-defined string. */
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
bool IsPalindrome(char[]);
int main()
{
	char word[MAX];
	int i = 0, j;
	cout << "Enter a word:";
	cin >> word;
	//I will add a condition to take a word not a string
	
}

bool IsPalindrome(char[])
{
	int j;
	for (j = 0; word[j] != '\0'; j++);//Gets the length of the word
	while (i <= j - 1)
	{
		if (word[i] != word[j - 1])
		{
			cout << "This is not a palindrome";
			break;
		}
		if (i == j - 1)
		{
			cout << "This is a palindrome";
		}
		i++;
		j--;
	}
	if (i > j - 1)
	{
		cout << "This is a palindrome";
	}
	return false;
}
