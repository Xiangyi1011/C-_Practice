#include <iostream>
#include <vector>
using namespace std;

//vector可儲存多個值, 相同類型資料, 使用索引, 內建的class, class vector, 一個class可以有多個物件、實體（object.instance）, 物件導向, 改class實體跟著改
int main(){
  vector<int> vec_a; //vector<int>資料類型, vec_a變數名稱, 沒有任何元素的vector實體, 不用配置記憶體, 配置一個實體, 可動態新增實體
  vector <int> vec_b(10); //建立一個10個元素的vector實體, 所有元素預設值為0
  cout << vec_b[0] << '\n';
  cout << vec_b[9] << '\n';
  cout << "==============" << '\n';
  for( int i=0; i<10; i++){
    cout << vec_b[i] << '\n'; 
  }
  cout << "==============" << '\n';

  vector<int> vec_c(10, 8); //建立一個10個元素的vector實體, 所有元素預設值為8
  for(int i=0; i<10; i++){
    cout << vec_c[i] << '\n';
  }
  cout << "==============" << '\n';
  
  vector<int> vec_d{10,20,30,40,50}; //建立一個5個元素的vector實體, 元素預設值依序為10,20,30,40,50
  for(int i=0; i<5; i++){
    cout << vec_d[i] << '\n';
  }
  cout << "==============" << '\n';
}