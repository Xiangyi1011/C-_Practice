// #include <iostream>
// using namespace std;

// //兩數對調
// void swap(int *n, int *m){ //原為call by value, 調換後記憶體被消滅 無效, 所以使用call by address, 先copy位址, 不會消失
//   //取到值後可改變main裡的值
//   int temp;
//   temp = *n;
//   *n = *m;
//   *m = temp;
// }

// //兩數對調
//   int main(){
//   int x = 666;
//   int y = 888;
//   cout << "x=" << x << ",y=" << y << '\n';
//   swap(&x,&y); //取位址
//   cout << "x=" << x <<   ",y=" << y << '\n';
// }