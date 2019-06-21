#include<iostream>
using namespace std;

void anagram(char stg1[], char stg2[])
{
    int i, flag = 0,  x[26] = {0}, y[26] = {0};
    
    for(i = 0; stg1[i] != '\0'; i++)
        x[stg1[i] - 'a']++;
        
    for(i = 0; stg2[i] != '\0'; i++)
        y[stg2[i] - 'a']++;
        
    for (i = 0; i < 26; i++)
    {
        if (x[i] != y[i])
            flag = 1; 
    }
    
    if (flag == 1)
        cout << "Entered strings are not anagrams.";
    else
        cout << "Entered strings are anagrams.";
}
 
int main ()
{
    char stg1[50], stg2[50];
    
    cout << "Enter The String 1 : ";
    gets(stg1);
    cout << "Enter The String 2 : ";
    gets(stg2);
    
    anagram(stg1, stg2);
    
    return 0;
}
