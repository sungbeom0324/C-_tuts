#include <iostream>
#define PIE 3.1415926535 // 상수선언 C 스타일
using namespace std;

int main(){
  // 원의 넓이 구하기
  // const float PIE = 3.1415926535  이게 c++ 방식. 변수형까지 같이 선언해준다. const : 제한자

  int r = 3;
  float s = r * r * PIE;
  cout << s << endl;

  // 데이터형 변환 : C++ 는 데이터형이 다양해서 사용자가 골라쓰기 좋은데 이는 컴터한테는 힘듦.
  /* 자동 변환
  1. 특정 데이터형의 변순에 다른 데이터형의 값을 대입했을 때
  2. 수식에 데이터형을 혼합하여 사용했을 때 
  3. 함수에 매개변수를 전달할 때
  */ 
  
  int a = 3.14; // > 3
  // 강제 변환 : typeName(a) 또는 (typeName)a
  char ch = 'M';
  cout << int(ch) << " "  << (int)ch << endl;  // 77 77

  //C++ 한정 새로운 방법
  //static_cast<tyoeName>
  cout << static_cast<int>ch << endl;

return 0;
}
