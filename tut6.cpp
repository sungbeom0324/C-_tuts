// 산술연산자와 auto

#include <iostream>
using namespce std;

int main(){
  // 다섯가지 연산자 + - * / %
  // 나누기 '/' 의 경우 두 개의 피연산자가 모두 정수이면 결과값른 '몫' 이다.
  
  // C++ 가 복잡한 산술 연산을 수행할 수 있을까? 가능!
  
  // auto 선언할때 자동으로 데이터형을 골라줌
  auto n = 100; // int
  auto x = 1.5; // float
  auto y = 1.3e12L; // long long
  // 좋은 습관은 아님. 복잡한 변수형을 다룰 떄 사용


return 0;
} 
