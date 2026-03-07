// #include <iostream>
// using namespace std;

// //建立指標變數, 記憶體位置指向n（必指向一個記憶體裡）,目的在別的記憶體區塊可以控制另一個記憶體區塊的值, 自訂function()內需參數 -> function(int *ptr_n), 呼叫時function(&n) -> 取位址放入自訂function
// //取址運算子 -> ＆一般變數
// //取值運算子 -> *記憶體位址, 使用可控制n值, 可以取值或改變值

// void change_value(int *ptr_n){ //call by address
//   *ptr_n = 20;
// }

// //最重要的是「call by value」與「call by address」的差別在於call by value只是copy（函數結束後就消失了）而call by address是覆蓋（直接改變原本的值）

// int main(){
//   int n = 5; //一般變數, 無法儲存記憶體
//   change_value(&n);
//   cout << "n的值是" << n << '\n';
  
// }