// 実行時間制限: 2 sec / メモリ制限: 256 MB

// 配点 : 100 点

// 問題文
// シカのAtCoDeerくんは二つの正整数 a,b を見つけました。 a と b の積が偶数か奇数か判定してください。

// 制約
// 1 ≤ a,b ≤ 10000
// a,b は整数
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=0;
    cin>>a>>b;
    if((a%2)&&(b%2))
    cout<<"Odd"<<endl;
    else
    cout<<"Even"<<endl;
}