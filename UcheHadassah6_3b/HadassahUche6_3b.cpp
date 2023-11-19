/*b) Re-write the above exercise with a function: Write a function called IsPalindrome 
which takes as a parameter a string and returns true (i.e. 1) if the string is a 
palindrome. Write a main program to test your function with a user-defined string. 
This program does not count upper case and lower case as equal*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
bool IsPalindrome(char[]);
int main()
{
	char word[MAX];
	cout << "Enter a word:";
	cin >> word;
	if (IsPalindrome(word))
	{
		cout << "This is a palindrome!";
	}
	else
	{
		cout << "This is not a palindrome!";
	}
}

bool IsPalindrome(char word[])
{
	int i = 0, j;
	for (j = 0; word[j] != '\0'; j++);//Gets the length of the word
	while (i <= j - 1)
	{
		if (word[i] != word[j - 1])
		{
			return false;
		}
		if (i == j - 1)
		{
			return true;
		}
		i++;
		j--;
	}
	if (i > j - 1)
	{
		return true;
	}
	return false;
}
