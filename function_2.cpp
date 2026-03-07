#include <iostream>
using namespace std;

//兩數對調
void swap(int *n, int *m){ //因為call by address, 先copy位址, 所以不會消失
  //取到值後開始改變main裡的值
  int temp;
  temp = *n;
  *n = *m;
  *m = temp;
}

//兩數對調
  int main(){
  int x = 666;
  int y = 888;
  cout << "x=" << x << ",y=" << y << '\n';
  swap(&x,&y); //取位址
  cout << "x=" << x <<   ",y=" << y << '\n';
}