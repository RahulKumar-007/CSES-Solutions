#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int Max = 0;
    string s;
    cin >> s;
    char c = s[0];
    int temp = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if (c == s[i])
        {
            temp++;
        }
        else
        {
            c = s[i];
            Max = max(Max, temp);
            temp = 1;
        }
    }

    // Check for the last sequence
    Max = max(Max, temp);

    cout << Max << endl;

    return 0;
}

