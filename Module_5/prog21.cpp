#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
#include <string>
using namespace std;
int getLength(char *);
void toUpper(char *);
void toLower(char *);
void toProper(char *);
void toPattern(char *);

int main()
{
    char name[80];

    cout << "Enter a name :";
    cin >> name;
    cout << "WHERE AM I";
    int r = getLength(name);

    cout << "The length of string is :" << r;
    toUpper(name);
    cout << "The string in Capital Letters is: " << name;
    toLower(name);
    cout << "The string in lower-case letters is: " << name;
    toProper(name);
    cout << "The string in proper letters is: " << name;
    /*     toPattern(name);
        cout << "The string in patterned letters is: " << name;
     */
}

void toUpper(char *p)
{

    while (*p)
    {

        *p = (*p >= 'a' && *p <= 'z') ? *p = *p - 32 : *p;
        p++;
    }
}
int getLength(char *p)
{

    int ctr = 0;
    while (*p)
    {
        cout << *p << " ";
        ctr++;
        p++;
    }
    return ctr;
}

void toLower(char *p)
{
    // write code to convert to small cases
    while (*p)
    {
        *p = (*p >= 'A' && *p <= 'Z') ? *p = *p + 32 : *p;
        p++;
    }
}

void toProper(char *p)
{
    // write code to convert to proper case i.e. firts capital and rest small
    if (*p >= 'a' && *p <= 'z')
    {
        *p = *p + 32;
    }

    p++;
    while (*p)
    {
        toLower(p);
    }
}

void toPattern(char *p, int r)
{
    // write code to convert to the pattern ... aBcDeFgHiJ...one capital and one small
    while (*p)
    {
        *p = (*p >= 'A' && *p <= 'Z') ? *p = *p + 32 : *p;
        p++;

        *p = (*p >= 'a' && *p <= 'z') ? *p = *p - 32 : *p;
        p++;
    }
}
