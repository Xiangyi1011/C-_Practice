#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

class person {
public:        //公開的
  string name; //欄位
  int height;
  int weight;

  person() { //建構式
  }

  person(string n, int h, int w) { //建構式預設值, 使其輸出同格式
    name = n;
    height = h;
    weight = w;
  }

  double bmi(){
      return weight / pow((height/100.0), 2); //100.0告知商不一定為整數
  }
};

int main() {
  vector<person> persons; //建立一個vector實體, 內容為person類別, 名稱為persons
  persons.push_back(person("robert",173,77));
  persons.push_back(person("jenny",165,56));
  persons.push_back(person("john",180,80));

  for(person &p:persons){//參考persons的值, 將值灌入p
    cout << p.name << '\n';
    cout << p.height << '\n';
    cout << p.weight << '\n';
    cout << p.bmi() << '\n';件
  }
}