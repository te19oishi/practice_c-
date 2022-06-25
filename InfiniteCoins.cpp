// 問題文
// E869120 は 1 円硬貨を A 枚と 500 円硬貨を無限枚持っています.
// これらの硬貨だけを使うことによって, ちょうど N 円を支払うことができるかを判定しなさい.

// 制約
// N は 1 以上 10000 以下の整数
// A は 0 以上 1000 以下の整数
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0,a=0;
    cin>>n>>a;
    if((n%500<=a))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}