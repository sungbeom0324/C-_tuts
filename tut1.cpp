// Hello world!
#include <iostream>  // 전처리 지시자 c 에서는 .h
/* 
c++ 에서 함수를 사용하고자 한다면 
반드시 그 함수의 원형을 미리 정의하여야 한다. 
함수 : 기능을 하는 친구 ex, cout 는? 전처리 지시자에 이미 있기 때문
*/
using namespace std; //  std::cout 

int main()   //c++ 코드에는 반드시 main 의 이름을 가지는 함수가 있어야 한다. 실행시 실행되는 함수.
{
  cout << "Hello, world!" << endl;  //줄바꿈 // << 데이터의 흐름을 말함. 
  return 0;
}

