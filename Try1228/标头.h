#ifndef TRY1228_TRY1228_TRY_H
#define TRY1228_TRY1228_TRY_H

#include <tchar.h>
#include <iostream>

//TODO  ¿âÖ®ÀàµÄsha

const int kGolfNum (10);

inline void showtitle(void) { std::cout<< "C++_Primer_Plus\n"
    << "    by itAir\n"<< "Hello World!\n\n"; }           

inline void longline(void) { std::cout<< "________________________________\n\n"; }  
inline void longline(const int i) { std::cout<<i<< ".______________________________\n\n"; } 

double AverDiff(double, double);

int InputResult(double [], int);
void ShowResult(double [], int);
void AverageResult(double [], int);

struct Box {
  char maker[40];
  float height;
  float width;
  float lenght;
  float volume;
};

Box BoxSetter(char[], float[]);
Box BoxSetterByAdd(char[], float*, float*, float*);
void ShowBox(Box);



#endif //TRY1228_TRY1228_TRY_H