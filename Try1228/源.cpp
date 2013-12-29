/*C++ Primer Plus �κ�ϰ�� p250 7.13 
 by itAir
 Try to use Google C++ programing style    */    

#include "��ͷ.h"
#include <iostream>
#include "string.h"
#include <string>
#include <cstring>
#include <array>

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
  tempbox.volume = *h**w**l; //������...
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

int Fill_array(double num[], const int len) {
  int i; 
  if (len < 0) {
    cout << "Wrong array length.";
    return 0;
  }
  cout << "Enter some real numbers:\n";
  for (i = 0; i < len; i++) {
    cin >> num[i];
    if (!cin){
      cin.clear();
      while (cin.get() != '\n') continue;
      cout << "Enough number.\n";
      return i;
    }  
  }
  return i+1;
}

void Show_array(double num[], const int len) {
  if (len < 0) {
    cout << "Wrong array length.";
     exit(EXIT_FAILURE);
  }
  for (int i = 0; i < len; i++) {
    cout << num[i] << "\t";
  }
  cout << endl;
}

void Reverse_array(double num[], const int len) {
  if (len < 0) {
    cout << "Wrong array length.";
    exit(EXIT_FAILURE);
  }
    for (int i = 0; i < (len/2); i++)  {
      double temp = num[len-i-1];
      num[len-i-1] = num[i];
      num[i] = temp;
    }
}

double* Fill_array_(double ar[], const double* p) {
  double* temp;
  int i(0);
  for (temp = ar; temp != p; temp++) {
    cout << "Enter value # " << ++i << ": ";
    cin >> *temp;
    if (!cin) {
      cin.clear();
      while (cin.get() != '\n') 
        continue;
      cout << "Bad input: ipute process terminated.\n";
      break;
    }
    else if (temp < 0)
      break;
    ar = temp;
  }
  return temp;
}

void Show_array_(double ar[], const double* p) {
  int i = 0;
  for (double* t = ar; t != p; t++)  {
    cout << "Property #" << (++i) << ": $ ";
    cout << *t << endl;
  }
}

void Revalue_(double r, double ar[], const double* p) {
  for (double* i = ar ; i != p; i++) {
    *i *= r;
  }
}

void CountDown(int n) {
  cout << "Counting down ... " << n << endl;
  if (n > 0)  CountDown (n-1) ;
  cout << n << ": Kaboom!\n";
}

void Fill(std::array<double, kSeasons> *pa) {
  for (int i = 0; i < kSeasons; i++) {
    cout << "Enter " << Snames[i] << " expenses: ";
    cin >> (*pa)[i];
  }
}

void Show(std::array<double, kSeasons> da) {
  double total = 0.0 ;
  cout << "\nEXPENSE\n";
  for (int i = 0; i < kSeasons; i++) {
    cout << Snames[i] << ": $" << da[i] << endl;
    total += da[i];
  }
  cout << "Total Expensens: $" << total << endl;
}

void Fill(double pa[]) {
  for (int i = 0; i < kSeasons; i++) {
    cout << "Enter " << Snames1[i] << " expenses: ";
    cin >> pa[i];
  }
}
void Show(const double da[]) {
  double total = 0.0 ;
  cout << "\nEXPENSE\n";
  for (int i = 0; i < kSeasons; i++) {
    cout << Snames1[i] << ": $" << da[i] << endl;
    total += da[i];
  }
  cout << "Total Expensens: $" << total << endl;
}

void Fill(Expen* pa) {
  for (int i = 0; i < kSeasons; i++) {
    cout << "Enter " << Snames1[i] << " expenses: ";
    cin >> (*pa).expenses[i];
  }
}
void Show(const Expen da) {
  double total = 0.0 ;
  cout << "\nEXPENSE\n";
  for (int i = 0; i < kSeasons; i++) {
    cout << Snames1[i] << ": $" << da.expenses[i] << endl;
    total += da.expenses[i];
  }
  cout << "Total Expensens: $" << total << endl;
}

int GetInfo(Student st[], int n) {
  int i(0);
  for (i = 0; i < n; i++) {
    cout << "Enter #" << (i+1) << " student's iformations:\n";
    cout << "Fullname: ";    
    cin.getline(st[i].fullname, SLEN);
    cout << "Hobby: ";
    cin.getline(st[i].hobby, SLEN);
    cout << "Opp skill level: ";
    cin>>st[i].ooplevel;
    cin.get();
    }
  return i ;
}

void Display1(Student st) {
  cout << "Name: \t" << st.fullname << endl
       << "Hobby:\t" << st.hobby << endl
       << "Opp skill level:\t" << st.ooplevel <<endl;
}

void Display2(const Student *st) {
  cout << "Name: \t" << (*st).fullname << endl
    << "Hobby:\t" << (*st).hobby << endl
    << "Opplevel:\t" << (*st).ooplevel <<endl;
}
void Display3(const Student st[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "\nStudent #" << i << " :\n" 
      << "Name: \t" << st[i].fullname << endl
      << "Hobby:\t" << st[i].hobby << endl
      << "Opplevel:\t" << st[i].ooplevel <<endl;
  } 
}

double Add(double x, double y) {
  return x+y;
}

double Diff(double x, double y) {
  return (x > y) ? (x - y) : (y - x);
}

double Calculate(double x, double y, double Func(double a ,double b)) {
  double result = Func(x, y);
  return result;
}


void main()
{
  showtitle();
  longline(1);
   //1
  double a(0.0), b(0.0);
  double average_diff;
  cout << "Enter two numbers and quit with 0\n";
  while (cin >> a >> b && a != 0.0 && b != 0.0 ) {
    average_diff = AverDiff (a, b);
    cout << " The average_differ of " << a << " and " << b 
         << " is " << average_diff << endl;
  }
  //����ԭ�� �� ʵ�ֵ�λ��
  longline(2);
  //2
  double golf_results[kGolfNum];  
  int num(0);
  num = InputResult(golf_results, kGolfNum);
  ShowResult(golf_results, num);
  AverageResult(golf_results, num);
  //������������Ĵ����븳ֵѭ�� ������
  longline(3);
  //3
  Box box1, box2;
  char ch[40] = "Itair";
  float data[4]= {10.0, 12.0, 15.0, 1800.0};  
  box1 = BoxSetter(ch, data);
  box2 = BoxSetterByAdd(ch, &(box1.height), &(box1.width), &(box1.lenght));
  ShowBox(box1);
  ShowBox(box2);
  //�⵰�۵� MS ��ô�Ͳ�֧�� �б��ʼ����?
  longline(4);
  //4
  cout << "˫ɫ�� 5+1: \n"
       << "���� 47 ѡ 5 \n" 
       << "���� 27 ѡ 1 \n"
       << "��ͷ���ĸ�����: ";
  long double rate_red = Probability(47, 5);
  long double rate_blue = Probability(27, 1);
  cout << rate_red * rate_blue << "֮һ -_-! \n";
   //�������� ����ֵ�ķ�Χ
  longline(5);
  //5
  unsigned long long factorial(0);
  int n;
  cout << "����׳�:\n ";
  cout << "����һ��С��20�������� n : ";
  while(cin >> n && n >= 0 && n < 20) {
    factorial = Factorial(n);
    cout << n << "! = " << factorial <<endl;
    cout << "����һ�������� n : ";
  }
  //�ݹ�
  longline(6);
  //6
  double numbers[kArrayLength];
  int length = Fill_array(numbers, kArrayLength);
  Show_array(numbers, length);
  Reverse_array(numbers, length);
  Show_array(numbers, length);
  for (int i = 2; i < length; i++)  {
    for (int j = 2; j < length; j++) {
      Reverse_array(numbers, j);
      Show_array(numbers, length);
    }
  }
  Show_array(numbers, length);
  Reverse_array(numbers, 0);
  Show_array(numbers, 0);
  // ���� ���������
  longline(7);
  //7
  double properties[kMax];
  for (int i = 0; i < kMax; i++) properties[i] = 0.0;
  double* pend;
  pend = &properties[kMax];
  double* pt = Fill_array_(properties, pend);
  Show_array_(properties, pt);
  cout << "Enter revaluation factor: ";
  double factor;
  cin >> factor;
  Revalue_(factor, properties, pt);
  Show_array_(properties, pt);
  cout << "Done.\n";
  //����ָ�� ����  *ptr = &ppp[] ; ptr++ ������;
  longline(8);
  //8
   CountDown(5);
   array<double, kSeasons> expenses;
   Fill(&expenses);
   Show(expenses);
   double expenses1[kSeasons];
   Fill(expenses1);
   Show(expenses1);
   Expen expenses2;
   Fill(&expenses2);
   Show(expenses2);  
  //��ͬ�ṹ������ �ں������ ��ֵ��ʽ������
  longline(9);
  //9
  cout << "Enter class size: ";
  int class_size;
  cin >> class_size;
  while (cin.get() != '\n') continue;
  Student* ptr_stu = new Student[class_size];
  int enterd = GetInfo(ptr_stu, class_size);
  for (int i = 0; i < enterd; i++)  {
    cout << "\nStudent #" << i+1 << " :\n";
    Display1(ptr_stu[i]);
    Display2(&ptr_stu[i]);
  }
  cout << "\nDisplay3:\n";
  Display3(ptr_stu, enterd);
  delete[] ptr_stu;
  cout << "Done.\n";
  // �����ĵ��Ժ��������� ��ӿ� ��ɺ�������
  longline(10);
  //10
  double x, y;
  cout << "Enter two real numbers:\n";
  while (cin >> x >> y) {
    double a = Calculate(x, y, Add);
    double b = Calculate(x, y, Diff);
    cout << "The sum of " << x << " and " << y << " is " << a << endl;
    cout << "The difference of " << x << " and " << y << " is " << b << endl;
    cin.get();
  }
  //�������ָ��� ������ʽ , ����ָ������뺯��Ƕ��
  longline();//��������ү��
  system("pause");
}
