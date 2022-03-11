// 변수의 선언과 규픽
// 변수란? 변할 수 있는 수
/*
1. 변수의 자료형
2. 변수의 이름
3. 변수가 어디에 저장되는가(메모리 영역)? >> 컴파일러가 자동으로 결정해줌
*/

#include <iostream>
using namespace std;

int main() 
{

  int a; // 선언 : 1. 숫자로 시작 불가 2. c++ 키워드 사용 불가 3. whitespace 사용 불가
  a = 7; // 대입 
  int b =3; // 초기화 

  a = 5;
  b = 8;

  /* 변수는 사용되기 이전에 정의되어야 한다.
  { int b;
       { int a;
         b = 5;
       }
    a = 8; 
  }
  이 경우 b는 사용 가능하지만 a는 블록이 끝나므로 사용이 불가능하다. 
  */

  cout << a << b << endl; 
  cout << &a << endl; // 주소연산자 &변수이름
  return 0;
}


