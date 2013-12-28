//C++ Primer Plus 课后习题 p250 7.13 
// by itAir
// Try to use Google C++ programing style                                      
#include "标头.h"
#include <iostream>

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
  double golf[4];
  *golf = 0.1;
  golf++ ;
  *golf = 0.2;

  longline();
  system("pause");

}
