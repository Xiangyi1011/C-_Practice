#include <iostream>
using namespace std;

int *create_array(){
  int *array = new int[5]; //建立heap空間, 並將5個位址指向array
  array[0] = 10;
  array[1] = 20;
  array[2] = 30;
  array[3] = 40;
  array[4] = 50;
  return array;
}
  
int main(){
  int *array = create_array();
  for(int i=0;i<5;i++){
    cout << array[i] << " "; //輸出數值數量
  }
  cout << '\n';
  delete[] array; //釋放heap空間, 若是放的是陣列, 加上[]
  return 0;
}