// 問題文
// 上皿天秤は、左の皿に乗っているおもりの重さの合計を L とし、右の皿に乗っているおもりの重さの合計を R としたとき、 L>R なら左に傾き、L=R なら釣り合い、L<R なら右に傾きます。

// 高橋君は、上皿天秤の左の皿に重さ A のおもりと重さ B のおもりを、右の皿に重さ C のおもりと重さ D のおもりを置きました。

// 上皿天秤が左に傾くなら Left を、釣り合うなら Balanced を、右に傾くなら Right を出力してください。

// 制約
// 1≤A,B,C,D≤10
// 入力はすべて整数である
// 入力
// 入力は以下の形式で標準入力から与えられる。

// A B C D
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=0,c=0,d=0;
    cin>>a>>b>>c>>d;
    int l=a+b,r=c+d;
    if((l-r)>0)
    cout<<"Left"<<endl;
    else if(l==r)
    cout<<"Balanced"<<endl;
    else
    cout<<"Right"<<endl;
}