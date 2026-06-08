#include<iostream>
#include<fstream>
#include<vector>

using namespace std;
//in擠入value, 將value放入numbers
int main(){
  vector<int> numbers;
  ifstream in; //實體方法open(), 開啟檔案
  in.open("a1.txt");
  cout << in.good() << '\n'; //good()回傳布林值, true=1, false=0, 判斷檔案是否開啟成功
  if(in.good()){
    cout << "讀檔成功";
    int value;
    while(in >> value){ //用while, false則跳出迴圈
      numbers.push_back(value);//將vector的值放入numbers
    } //讀取檔案內容, 將值存入value
  }
    else{
      cout << "讀檔失敗";
  }
  for(int elem:numbers){ //讀取numbers的值
    cout << elem << " ";
  }
  cout << '\n';
}