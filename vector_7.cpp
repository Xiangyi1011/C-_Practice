#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v){ //v為一個實體名稱, 參數, copy一份list的值(vector), call by value(copy)
  //void print(vector<int> &v)參考變數, 不是copy
  for(int elem:v){ //elem為一個實體名稱, copy一份v的值
    cout << elem << '\n'; //輸出值
  }
}

int main(){
  vector <int> list{2, 4, 6, 8}; //list為一個實體名稱
  print (list); //括號內為真正引數值
}