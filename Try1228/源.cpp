//C++ Primer Plus 课后习题 p250 7.13 
// by itAir
// Try to use Google C++ programing style                                      
#include "标头.h"
#include <iostream>
#include "string.h"
#include <string>
#include <cstring>

using namespace std;

double AverDiff(double a, double b) {
  return 2.0 * a * b / (a + b);
}

int InputResult(double res[], int limit) {
  double dd(0.0);
  int i;
  cout << "Enter all the golf results:\n";
  for (i = 0; i < limit ; i++) {
    cin >> dd;
    if(!cin) {
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Bad input: input precess terminates.\n";
      break;
    } else if(dd < 0) 
      break;
    res[i] = dd;
  }
  return i;
}

void ShowResult(double res[], int num) {
  cout << "Golf Result : \n";
  for (int i = 0; i < num; i++ )  {
    cout << "# " << i+1 << " : " << res[i] << endl;
  }
}

void AverageResult(double res[], int num) {
  double sum(0.0);
  int count(0);
  for (int i = 0; i < num; i++ )  {
    sum += res[i];    
  }
  cout << "Average results is : " << sum / num << endl;
}
Box BoxSetter(char ch[], float data[]) {
  Box tempbox;
  tempbox.height = data[0];
  tempbox.width = data[1];
  tempbox.lenght = data[2];
  tempbox.volume = data[3];
  strcpy_s(tempbox.maker, ch); 
  return tempbox;
}

Box BoxSetterByAdd(char ch[], float* h, float* w, float* l) {
  Box tempbox;
  tempbox.height = *h;
  tempbox.width = *w;
  tempbox.lenght = *l;
  tempbox.volume = *h**w**l; //蛋略疼...
  strcpy_s(tempbox.maker, ch); 
  return tempbox;
}

void ShowBox(Box box) {
  cout << "Maker : " << box.maker << endl
       << "Height : " << box.height << endl
       << "Width : " << box.width << endl
       << "Length : " << box.lenght << endl
       << "Volume : " << box.volume << endl << endl;
}

long double Probability(unsigned numbers, unsigned picks) {
  long double result = 1.0 ;
  long double n;
  unsigned p;
  for (n = numbers, p = picks; p > 0 ; n--, p--) 
    result = result *n / p;
  return result;
}

unsigned long long Factorial(int n) {
  if (0 == n) return unsigned long long(1);
  else return unsigned long long(n) * Factorial(n-1);
}

void main()
{
  showtitle();
  longline(1);
  // 1
  //double a(0.0), b(0.0);
  //double average_diff;
  //cout << "Enter two numbers and quit with 0\n";
  //while (cin >> a >> b && a != 0.0 && b != 0.0 ) {
  //  average_diff = AverDiff (a, b);
  //  cout << " The average_differ of " << a << " and " << b 
  //       << " is " << average_diff << endl;
  //}
  // 函数原型 和 实现的位置
  longline(2);
  //2
  //double golf_results[kGolfNum];  
  //int num(0);
  //num = InputResult(golf_results, kGolfNum);
  //ShowResult(golf_results, num);
  //AverageResult(golf_results, num);
  //函数数组变量的传入与赋值循环 错误处理
  longline(3);
  //3
  Box box1, box2;
  char ch[40] = "Itair";
  float data[4]= {10.0, 12.0, 15.0, 1800.0};  
  box1 = BoxSetter(ch, data);
  box2 = BoxSetterByAdd(ch, &(box1.height), &(box1.width), &(box1.lenght));
  ShowBox(box1);
  ShowBox(box2);
  //这蛋疼的 MS 怎么就不支持 列表初始化呢?
  longline(4);
  //4
  cout << "双色球 5+1: \n"
       << "红球 47 选 5 \n" 
       << "蓝球 27 选 1 \n"
       << "中头奖的概率是: ";
  long double rate_red = Probability(47, 5);
  long double rate_blue = Probability(27, 1);
  cout << rate_red * rate_blue << "之一 -_-! \n";
  // 函数调用 返回值的范围
  longline(5);
  //5
  unsigned long long factorial(0);
  int n;
  cout << "算个阶乘:\n ";
  cout << "输入一个小于20的正整数 n : ";
  while(cin >> n && n >= 0 && n < 20) {
    factorial = Factorial(n);
    cout << n << "! = " << factorial <<endl;
    cout << "输入一个正整数 n : ";
    
  }
  //递归
  longline(6);
  //6


  longline();
  system("pause");

}
