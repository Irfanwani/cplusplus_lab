// Single File Programming Question
// Problem Statement



// Preethi is developing an input processing module for a chatbot. Implement a program that reads user input and counts the number of words to analyze the user's query. Utilize pointer to pointer concept to process the input and count the words.



// Note: This is a sample question asked in a Wipro interview.

// Input format :
// The input consists of a list of words/sentences.

// Output format :
// The output prints the count of the words that are present in the given sentence/sentences.

// Code constraints :
// 1 <= Total number of characters in the sentence(s) <= 1000


#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char **ptr;
    char *pt;

    char input[1000];
    int count = 0, i;
    cin.getline(input, 1000);

    pt = input;
    ptr = &pt;

    for (i = 0; i < strlen(input); i++)
    {
        if (*(*ptr + i) == ' ' && *(*ptr + i + 1) && *(*ptr + i + 1) != ' ')
            count++;
    }

    if (count != 0)
        count++;

    cout << count << endl;

    return 0;
}