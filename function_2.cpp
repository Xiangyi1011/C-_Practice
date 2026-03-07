#include <iostream>
using namespace std;

//兩數對調
void swap(int n, int m){ //call by value, 所以無解
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