#ifndef TRY1228_TRY1228_TRY_H
#define TRY1228_TRY1228_TRY_H

#include <tchar.h>
#include <iostream>
#include <array>

//常量
const int kGolfNum (10);
const int kArrayLength (10);
const int kMax(5);
const int kSeasons(4);
const std::array<std::string, kSeasons> Snames =
  {"Spring", "Summer", "Fail", "Winer" };
const char* Snames1[kSeasons] = 
  {"Spring", "Summer", "Fail", "Winer" };
const int SLEN(30);

//类与结构
struct Box {
  char maker[40];
  float height;
  float width;
  float lenght;
  float volume;
};

struct Expen {
  double expenses[kSeasons];
};

struct Student {
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
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

void CountDown(int);
void Fill(std::array<double, kSeasons>*);
void Show(std::array<double, kSeasons>);
void Fill(double[]);
void Show(const double[]);
void Fill(Expen*);
void Show(const Expen);

int GetInfo(Student [], int);
void Display1(Student);
void Display2(const Student *);
void Display3(const Student[], int);

double Add(double, double);
double Diff(double, double);
double Calculate(double, double, double* (double,double));
#endif //TRY1228_TRY1228_TRY_H