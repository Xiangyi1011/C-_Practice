#include <iostream>
#include <math.h>
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
  person p("robert", 170, 72);

  cout << "p的實體資料如下：\n";
  cout << "姓名" << p.name << '\n';
  cout << "身高" << p.height << '\n';
  cout << "體重" << p.weight << '\n';
  cout << "BMI" << p.bmi() << '\n';

  person p1("jenny", 173, 60);
  p1.name = "jenny";
  p1.height = 173;
  p1.weight = 60;

  cout << "p1的實體資料如下：\n";
  cout << "姓名" << p1.name << '\n';
  cout << "身高" << p1.height << '\n';
  cout << "體重" << p1.weight << '\n';
  cout << "BMI" << p1.bmi() << '\n';
}