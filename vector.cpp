#include <iostream>
#include <vector>
using namespace std;

//vector可儲存多個值, 相同類型資料, 使用索引, 內建的class, class vector, 一個class可以有多個物件、實體（object.instance）, 物件導向, 改class內的, 實體可一起改
int main(){
  vector<int> vec_a; //前資料類型, 後變數名稱, 沒有任何元素的vector實體
  vector <int> vec_b(10); //10個元素的vector實體, 預設值為0
  cout << vec_b[0] << '\n';
  cout << vec_b[9] << '\n';
  cout << "==============" << '\n';
  for( int i=0; i<10; i++){
    cout << vec_b[i] << '\n'; 
  }
}