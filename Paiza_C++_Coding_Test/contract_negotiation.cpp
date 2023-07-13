/*
あなたはある会社と取引をしていて、先日 10 個の要求を提出したところ、ちょうど今要求の可否を書いた紙が送られてきました。
その紙には相手方が承諾した要求については yes の頭文字 "y"、承諾しなかった要求については no の頭文字 "n" として、"y" と "n" のみが 10 個並んでいました。

このとき、いくつの要求が承諾されたかを返すプログラムを作成してください。

例えば、入力例 1 では相手方の返答が "yyyynnnnny" なので承諾された要求は 5 つであり、5 を表示します。
*/
#include <iostream>
using namespace std;

int count(string s, char c)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c)
            res++;
    return res;
}

int main()
{
    string str {};
    cin >> str;
    char c = 'y';
    cout << count(str, c) << endl;

    return 0;
}