#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;

	cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다.(한글 안됨) " << endl;
	getline(cin, s, '\n');
	int length = s.length();

	for (int idx = 0; idx < length; idx++) {
		string first = s.substr(0, 1);
		string sub = s.substr(1, length - 1);
		s = sub + first;
		cout << s << endl;
	}
	cout << s.find("love", 0);
}