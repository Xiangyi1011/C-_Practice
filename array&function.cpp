// #include <iostream>
// using namespace std;

// void multiple10(int *array, int n){ //指標變數與一般變數
//   for(int i=0;i<n; i++){
//     array[i] *= 10; //不需要傳出, 因為陣列本身為指標變數, 可以直接改變值
//   }
// }

// int main(){
//   int n;
//   n = 5;
//   int array[] = {10, 20, 30, 40, 50}; //陣列變數和指標變數都是儲存記憶體位址
//   cout << "陣列的記憶體位址：" << array << '\n';
//   multiple10(array,n);
//   for(int i=0;i<n;i++){
//     cout << array[i] << " ";
//   }
//   cout << '\n';
//   return 0;
// }