#include <iostream>
#include <vector>
using namespace std;

//手動輸入5個值
//得到5個值的加總
//得到5個值的平均

int main(){
  double sum = 0.0 ; //變數, 值可改變
  const int NUMBER_OF_ENTRIES = 5; //常數, 值不可改變, 一般常數全部大寫
  vector<double> numbers(NUMBER_OF_ENTRIES); //建立一個有5個元素的vector實體, 預設值為0.0, double是浮點數, 可放小數
  cout << "請輸入" << NUMBER_OF_ENTRIES << "個數值：" << '\n';
  for(int i=0; i<NUMBER_OF_ENTRIES; i++){
    cin >> numbers[i]; //輸入值, 存入vector
    sum += numbers[i]; //加總
  }

  cout << "此vector：";
  for (int i=0; i<NUMBER_OF_ENTRIES; i++){
    cout << numbers[i] << " ";
  }

  cout << '\n';
  cout << "加總：" << sum << ", 平均：" << sum / NUMBER_OF_ENTRIES << '\n';
  return 0;
}