// 사용자 입력과 string

#include <iostream>
#include <cstring> // strlen() 함수 사용 위함
using namespace std;

int main(){

  const int Size = 15;
  char name1[Size];  // 비어있는 배열
  char name2[Size] = "C++programming"; // 문자열 상수로 초기화된 배열  

  cout << "안녕하세요! 저는 " << name2;
  cout << "입니다! 성함이 어떻게 되시나요?\n";
  cin >> name1;  // cin 함수를 통해 비어있는 name1 배열에 입력한다.
  cout << "음, " << name1 << "씨, 당신의 이름은 ";
  cout << strlen(name1) << " 자 입니다만\n";
  cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
  cout << "이름이" << name1[0] << "자로 시작하시는 군요. \n";
  name2[3] = '\0';
  cout << "제 이름의 처음 세 문자는 다음과 같습니다. ";
  cout << name2 << endl; // 다시말하지만 c++에서는 null(\0) 까지만 출력한다.
  
  //cin 의 경우 whitespace 를 만나면 거기까지만 받는다! 따라서 띄어쓰기를 포함하기 위해선
  //getline 을 사용한다.
  cin.getline(name1, Size);  // 꺽쇠 안쓰는거고 입력을 저장할 변수와 변수의 크기를 명시한다.
  Cin.get(name1, Size); // cin.getline = cin.get



  // C++ 에서 문자열을 다루는 방법 중 하나인 string
  /*
  C 스타일로 string 객체를 초기화 할 수 있다.
  cin 을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
  cout 을 사용하여 string 객체를 디스플레이 할 수 있다.
  배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.
  == 문자열과 같은 방식으로 사용

  string 만의 특징 
  배열인데도 배열을 다른 배열 안에 통째로 대입하는 것이 가능하다!
  */
  
  char char1[20];  //char 배열 크기 지정 잊지 말자
  char char2[20] = "jaguar";
  //char1 = char2; -> 틀림    
  
  string str1;
  string str2 = "panda"
  //str1 = str2; -> 가능 
  cout << str[0] << endl; // -> p

return 0;
}
