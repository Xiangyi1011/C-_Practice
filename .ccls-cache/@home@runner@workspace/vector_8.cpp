#include <iostream>
#include <vector>

using namespace std;

//srandom()亂數種子, random()產生亂數

void print(const vector<int> &v){
  for(int elem:v){ //copy v的值
    cout << elem << " ";
  }
  cout << "元素數量：" << v.size() << '\n';
}

void make_random(vector<int> &v, int size){ //專門製造亂數的function
  //有ｖ和size兩個參數
  v.clear(); //執行過後所有值清除, 重新執行則已清除
  int n = random() % size + 1; //產生0+1~19+1的亂數
  for(int i=0; i<n; i++){ //產生n個亂數, 可能是1~20個亂數
    v.push_back(random()); //建立亂數在vector v最後面, 執行n次
  }
}

int main(){
  srandom(10); //值不變, 每次執行元素數量皆相同
  vector<int> list; //實體方法clear(), 將元素全部刪除
  cout << "vector初始化" << '\n';
  print(list);
  cout << "====================" << '\n';

  cout << "第一次make_random" << '\n';
  make_random(list, 20); //size為20
  print(list);
  cout << '\n';
  cout << "===========" << '\n';
  
  cout << "第二次make_random" << '\n';
  make_random(list, 5); //可能為1~5個亂數 
  print(list);
  cout << '\n';
  cout << "===========" << '\n';
}