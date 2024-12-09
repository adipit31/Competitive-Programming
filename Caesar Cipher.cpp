#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    for(int i = 0;i<str.length();i++)
    {
        char ch = str[i];
        int index_char = ch-'a';
        int decrypted_text = (index_char + 3)%26;
        str[i]= decrypted_text + 'a';

    }
    cout<<str;
}
