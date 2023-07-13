/*
商品 A の値段は 1000 円です。B 君の所持金は N 円で、所持金が商品 A の金額以上なら購入できます。
B 君が商品 A を購入できるなら Yes を、購入できないなら No を出力してください。

入力例 1 の場合
3000
3000 円は 1000 円以上なので Yes を出力します。
Yes
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input{};
    cin >> input;

    if (input >= 1000)
        cout << "Yes";
    else
        cout << "No";


    return 0;
}