#include <iostream>
#include <vector>
using namespace std;

//手動輸入5個值
//得到5個值的加總
//得到5個值的平均

int main(){
  double sum = 0.0 ; //變數, 值可改變
  const int NUMBER_OF_ENTRIES = 5; //const為常數, 值不可改變, 一般常數全部大寫
  vector<double> numbers(NUMBER_OF_ENTRIES); //建立一個有5個元素的vector實體, 預設值為0.0, double是浮點數, 可放小數
  cout << "請輸入" << NUMBER_OF_ENTRIES << "個數值：\n" << '\n';
  for(double &elem:numbers){ //for(內容資料類型 變數:vector), 利用vector copy一份給變數, 執行結束則消滅換下一個值進入迴圈 array做不到
    //加上&為參考 參考vector記憶體的元素 所以將輸入值灌入vector中, 若沒有參考, 則是將輸入值灌入elem中
    //不是指標
    cin >> elem; //輸入值, 存入vector
    sum += elem; //加總
  }

  cout << "此vector：";
  for (double elem:numbers){ //不加&為讀取vector記憶體的元素, copy一份到elem, 也可使用&讀取, 參考vector的元素值
    cout << elem << " ";
  }

  cout << '\n';
  cout << "加總：" << sum << ", 平均：" << sum / NUMBER_OF_ENTRIES << '\n';
  return 0;
}