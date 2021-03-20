#include <iostream>
#include <string>
#include <stdlib.h>
#include <list>

using namespace std;

int palindrome(string& input, int f, int l);
void reverse_String(string& input, int n, int i);
//int binarySearch(const int arr[], int f, int l, int v);

int main()
{
	int menuPick;
	string palInput;


	//main menu
	cout << "Main Menu" << endl;
	cout << "1 - Palindrome -  enter a string. Determine if the provided string is a palindrome.\n";
	cout << "2 - Quicksort -  \n";
	cout << "3 - Reverse String -  \n";
	cout << "4 - Exit -  \n";
	cin >> menuPick;

	if (menuPick < 1 || menuPick > 4)
	{
		cout << "invalid Input" << endl;
	}

	if (menuPick == 1) //Palindrome
	{
		while (true)
		{
			cout << "Enter a String and i will tell you if its a palindrome" << endl;
			getline(cin, palInput);
			
			if (palindrome(palInput, 0, palInput.length()) != 1)
			{
				cout << "not a palindrome" << endl;
			}
			else
				cout << palInput << " is a palindrome" << endl;

		}
	}
	if (menuPick == 2) //Quicksort
	{
		int num = 0;

		const int SIZE = 100;
		int size;
		int arr[SIZE];
		size = SIZE;

		cout << "How large will the array be?\nSize: ";
		cin >> size;

		for (int i = 0; i < size; i++)
		{
			if (i < size)
			{
				//enter random numbers into array
				num = rand() % 500 + 1;
				cout << num << " ";
				arr[i] = num;
			}
		}
		cout << "Array created" << endl;
		//quicksort array
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > (arr[i+1]))
			{
			}
		}
	}
	if (menuPick == 3) //Reverse String
	{
		string input;

		cout << "Please enter a String: (Case Sensitive)";
		cin >> input;
		cout << "Inputed: " << input << endl;
		reverse_String(input, input.length() - 1, 0);
		cout << "Reversed: " << input << endl;
			
	}
	if (menuPick == 4) //Exit
	{
		cout << "\n\nExiting Program\n\n";
		return 0;
	}
}

//int binarySearch(const int arr[], int f, int l, int v)
//{
//	int middle;
//	if (f > l) // base case ie. cannot search anymore
//	{
//		return -1;
//	}
//
//	middle = (f + l) / 2;
//
//	if (arr[middle] == v)
//	{
//		return middle;
//	}
//
//	if (arr[middle] < v)
//	{
//		//search top half of the array
//		return binarySearch(arr, middle + 1, l, v);
//	}
//
//	else
//	{
//		//search bottom half of the array
//		return binarySearch(arr, f, middle - 1, v);
//	}
//
//}

void reverse_String(string& input, int f, int l) {

	if (f <= l) 
	{ 
		return; 
	}
	else//perfect match
	{
		swap(input[l], input[f]);
		reverse_String(input, f - 1, l + 1);
	}
}

int palindrome(string& input, int f, int l)
{



	if (f != l /*|| f > l*/) //base case
	{
		return 0;
	}
	if (f == l)
	{
		return 1 + palindrome(input, (f + 1), (l - 1));
	}

}