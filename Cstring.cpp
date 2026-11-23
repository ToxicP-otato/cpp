//This program will complete 6 tasks.

#include <iostream>
#include <cstring>
using namespace std;

int lastIndexOf(char *s, char target)
{
    int last = -1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == target)
            last = i;
    }
    return last;
}

void reverseRange(char *s, int left, int right)
{
    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

void reverse(char *s)
{
    reverseRange(s, 0, (int)strlen(s) - 1);
}

int replace(char *s, char target, char replacementChar)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == target)
        {
            s[i] = replacementChar;
            count++;
        }
    }
    return count;
}

int findSubstring(char *s, char substring[])
{
    int sLen = (int)strlen(s);
    int subLen = (int)strlen(substring);

    for (int i = 0; i + subLen <= sLen; i++)
    {
        bool match = true;
        for (int j = 0; j < subLen; j++)
        {
            if (s[i + j] != substring[j])
            {
                match = false;
                break;
            }
        }
        if (match)
            return i;
    }
    return -1;
}

bool isPalindrome(char *s)
{
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

void reverseWords(char *s)
{
    int len = (int)strlen(s);
    reverseRange(s, 0, len - 1);

    int start = 0;
    for (int i = 0; i <= len; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            reverseRange(s, start, i - 1);
            start = i + 1;
        }
    }
}

int main()
{
    cout << boolalpha;

    char s1[] = "Giants";
    cout << "lastIndexOf(\"Giants\", 'a') = " << lastIndexOf(s1, 'a') << endl;
    cout << "lastIndexOf(\"Giants\", 'z') = " << lastIndexOf(s1, 'z') << endl;

    char s2[] = "flower";
    reverse(s2);
    cout << "reverse(\"flower\") -> " << s2 << endl;

    char s3[] = "go giants";
    int count = replace(s3, 'g', 'G');
    cout << "replace(\"go giants\", 'g', 'G') -> " << s3
         << ", replacements: " << count << endl;
    char s3b[] = "hello";
    count = replace(s3b, 'z', 'Z');
    cout << "replace(\"hello\", 'z', 'Z') -> " << s3b
         << ", replacements: " << count << endl;

    char s4[] = "Skyscraper";
    char sub1[] = "ysc";
    char sub2[] = "xyz";
    cout << "findSubstring(\"Skyscraper\", \"ysc\") = " << findSubstring(s4, sub1) << endl;
    cout << "findSubstring(\"Skyscraper\", \"xyz\") = " << findSubstring(s4, sub2) << endl;

    char p1[] = "abba";
    char p2[] = "hannah";
    char p3[] = "abc cba";
    char p4[] = "radar";
    char p5[] = "abc ba";
    cout << "isPalindrome(\"abba\") = " << isPalindrome(p1) << endl;
    cout << "isPalindrome(\"hannah\") = " << isPalindrome(p2) << endl;
    cout << "isPalindrome(\"abc cba\") = " << isPalindrome(p3) << endl;
    cout << "isPalindrome(\"radar\") = " << isPalindrome(p4) << endl;
    cout << "isPalindrome(\"abc ba\") = " << isPalindrome(p5) << endl;

    char w[] = "The Giants won the Pennant!";
    reverseWords(w);
    cout << "reverseWords -> " << w << endl;

    return 0;
}

/*
./a.out
lastIndexOf("Giants", 'a') = 2
lastIndexOf("Giants", 'z') = -1
reverse("flower") -> rewolf
replace("go giants", 'g', 'G') -> Go Giants, replacements: 2
replace("hello", 'z', 'Z') -> hello, replacements: 0
findSubstring("Skyscraper", "ysc") = 2
findSubstring("Skyscraper", "xyz") = -1
isPalindrome("abba") = true
isPalindrome("hannah") = true
isPalindrome("abc cba") = true
isPalindrome("radar") = true
isPalindrome("abc ba") = false
reverseWords -> Pennant! the won Giants The*/