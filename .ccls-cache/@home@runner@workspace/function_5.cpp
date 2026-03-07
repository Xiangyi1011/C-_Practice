#include <iostream>
using namespace std;

int *add (int a, int b){
  int *value = new int(0); //heap堆積變數(動態變數), 不能使用在一般變數, 執行結束不會被消滅, new建立堆積變數, *代表可改變值, new int(0)代表放入整數0的記憶體位址 (指標變數內只能裝位址, 不能裝數值)
  //new int(0), 0是初始值(預設放0)
  *value = a + b; //2.（stack堆疊變數在此function執行完, 記憶體區塊消失）, 控制new int(0)的值用取值運算值*
  return value; //傳出記憶體位址, 取址, 不需要＆, 因為value本身就是位址
}

int main(){
  int a = 6789;
  int b = 9876;
  int *value_ptr = add(a,b); //接收則是指標變數, 取值(上面return出的值, *是因為值可能在上面function中改變)
  //3.'2.'使其指向未知區塊所以無解

  cout << "a+b=" << *value_ptr << '\n';
  delete value_ptr; //將動態變數消滅
  return 0; //將main也消滅, 執行結束
  //上下之value,a,b是不同的變數, 因為在不同的記憶體位址

}