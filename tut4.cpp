#include <iostream>
using namespace std;

int main()
{
  //char : 작은 문자형. C++ 에서는 a,b,c 같은 문자들을 아스키 코드를 이용하여 나타낸다.
  // 아스키 코드에서는 문자마다 숫자가 대응되는데, 컴퓨터는 문자도 숫자로 받아들이는 것이다.
  int a = 77;
  char b = a;  // 큰 따옴표는 char 형에서 사용할 수 없다.
               // 큰 따옴표 "" 네는 null 문자 '\0' 이 포함되어 있다.
  char c = 'hi';
  cout << b << endl;  // >> M 
 
  //bool : 0(F) 혹은 1(T) 
  bool a = 0; // > 0
  bool b = 1;  // > 1
  bool c = 10; // > 1

return 0;
}


// 한글은 아스키가 아닌 유니 코드에서 지원한다.
