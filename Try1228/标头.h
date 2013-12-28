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

double AverDiff (double, double);

int InputResult (double [], int);
void ShowResult (double [], int);
void AverageResult (double [], int);



#endif //TRY1228_TRY1228_TRY_H