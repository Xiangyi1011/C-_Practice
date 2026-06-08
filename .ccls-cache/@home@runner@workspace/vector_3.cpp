#include <iostream>
using namespace std;

//兩數對調
void swap(int &n, int &m){ //參考變數, 未copy, 參考原本的值, 拿原本的值去做兩數對調
  //call by reference
  int temp;
  temp = n;
  n = m;
  m = temp;
}

//兩數對調
  int main(){
  int x = 666;
  int y = 888;
  cout << "x=" << x << ",y=" << y << '\n';
  swap(x,y);
  cout << "x=" << x <<   ",y=" << y << '\n';
}