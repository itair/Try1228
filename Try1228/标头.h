#ifndef TRY1228_TRY1228_TRY_H
#define TRY1228_TRY1228_TRY_H

#include <tchar.h>
#include <iostream>

//常量
const int kGolfNum (10);
const int kArrayLength (10);
const int kMax(5);
//类与结构
struct Box {
  char maker[40];
  float height;
  float width;
  float lenght;
  float volume;
};
//内联
inline void showtitle(void) { 
  std::cout<< "C++_Primer_Plus\n" << "    by itAir\n" << "Hello World!\n\n";
}           
inline void longline(void) { 
  std::cout<< "________________________________\n\n";
}  
inline void longline(const int i) { 
  std::cout<<i<< ".______________________________\n\n"; 
} 
//全局函数
double AverDiff(double, double);

int InputResult(double [], int);
void ShowResult(double [], int);
void AverageResult(double [], int);

Box BoxSetter(char[], float[]);
Box BoxSetterByAdd(char[], float*, float*, float*);
void ShowBox(Box);

long double Probability(unsigned, unsigned);

unsigned long long Factorial(int);

int Fill_array(double[], const int);
void Show_array(double[], const int);
void Reverse_array(double[], const int);

double* Fill_array_(double[], const double*);
void Show_array_(double[], const double*);
void Revalue_(double, double[], const double*);
#endif //TRY1228_TRY1228_TRY_H