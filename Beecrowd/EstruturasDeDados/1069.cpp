#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string s;
    while (N--)
    {
        cin >> s;
        int count = 0;
        stack<int> pilha;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '<')
                pilha.push(1);
            else if (s[i] == '>' and !pilha.empty())
            {
                count++;
                pilha.pop();
            }
        }
        cout << count << "\n";
    }
    return 0;
}
