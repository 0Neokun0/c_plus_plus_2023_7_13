/*
節分では年齢と同じ数だけの豆を食べる風習がありあなたはその用意をしています。

n 人の子どもたちの年齢が改行区切りで与えられるので合計で何個の豆を用意すればいいか出力してください。

入力例 1 の場合
3
11
9
8
11 + 9 + 8 で 28 となるので
28
と出力してください
*/
#include <iostream>
using namespace std;

int main()
{
    int n{};
    cin >> n; // Read the number of items

    int total = 0;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price; // Read the price of each item
        total += price; // Add the price to the total
    }

    cout << total; // Output the total

    return 0;
}
