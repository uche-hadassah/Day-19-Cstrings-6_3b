/*Name:Uche Hadassah
This program checks if a word is a palindrome but makes use of the IsPalindrome function 
NB:This program does not count upper case and lower case as equal*/
#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
bool IsPalindrome(char[]);//Function prototype
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
		if (word[i] != word[j - 1])//If there is a slight difference in the first loop
		{
			return false;
		}
		if (i == j - 1)//When it reaches the end and they are both equal
		{
			return true;
		}
		i++;
		j--;
	}
	if (i > j - 1)//Incase we have an even number of alphabets in a word
	{
		return true;
	}
	return false;
}
