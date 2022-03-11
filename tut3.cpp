// 정수형과 실수형 자료형

#include <iostream>
#include <climits> //라이브러리 > 헤더파일
using namespace std;

int main()
{
  //정수형 : 소수부가 없는 수
  // 음의 정수, 0, 양의 정수
  // short, int, long, long long >> 모두 음,0,양 저장 가능한데 상황에 알맞은 정수를 쓰는 것.

  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;
  
  cout << sizeof n_int << endl;
  cout << n_int << endl;
  cout << sizeof n_short << endl;
  cout << n_short << endl;
  cout << sizeof n_long << endl;
  cout << n_long << endl;
  cout << sizeof n_llong << endl;
  cout << n_llong << endl;

  unsinged short b = 345;  // 음의 영역을 사용하지 않는 대신 최대 범위를 그만큼 늘려준다. 


  //실수형
  float a = 3.14;
  int c = 3.14;  // > int 형이기에 3을 출력한다.
  
return 0;
}
