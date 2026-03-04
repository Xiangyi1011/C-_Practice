#include <iostream>
using namespace std;

//x1倍數時, 生命力-y1, x2同方式
int main() {
  int pos = 0; //位置
  int k, x1, y1, x2, y2;
  cin >> k; //生命力
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  while(k > 0) { //生命力>0 繼續 pos+生命力步數, 直到生命力<=0
    pos += k; //移動到pos+k
    if(!(pos % x1)) k -= y1; //如果pos是1的倍數, 生命力減少y1, 扣血後若生命力<=0, 仍輸出當回合落點
    if(!(pos % x2)) k -= y2; //也就是if(pos % x2 == 0), 餘數為0時, true, 生命力-y2
  }
  cout << pos; //輸出當回合落點
  return 0;
}