#include <iostream>
#include <vector>

using namespace std;

//利用&參考變數, 將vector<int>的實體傳給任何function

void print(vector<int> v){ //v為一個實體名稱, 參數, copy一份list的值(vector), call by value(copy)
  //void print(vector<int> &v)參考變數, 不是copy
  for(int elem:v){ //elem為一個實體名稱, copy一份v的值
    cout << elem << '\n'; //輸出值
  }
} //void未傳出值, 所以不需要return

int sum(vector<int> &v){
  int result = 0;
  for(int elem:v){
  result += elem;
  }
  return result;
}

int main(){
  vector<int> list{2, 4, 6, 8}; //list為一個實體名稱
  print (list); //括號內為真正引數值
  cout << "加總是：" << sum(list) << '\n'; //sum參數要求vector<int> &v, 所以要放入vector<int> list, return傳出的值等於sum(list)
}