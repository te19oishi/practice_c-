#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }
  if(op=="-"){
    cout<<A-B<<endl;
  }
  if(op=="*"){
    cout<<A*B<<endl;
  }
  if(op=="/"){
    if(B)
    cout<<A/B<<endl;
    else
    cout<<"error"<<endl;
  }
  if(op=="?"){
    cout<<"error"<<endl;
  }
  if(op=="="){
    cout<<"error"<<endl;
  }
  if(op=="!"){
    cout<<"error"<<endl;
  }
}
