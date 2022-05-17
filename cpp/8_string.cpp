// 8_string.cpp
#include <iostream>
#include <string>
using namespace std;

// 1. C의 문자열
//   '\0' 끝나는 char 배열
// strcmp, strcpy, strcat, strlen ...

// 2. C++의 문자열
//   std::string
// 3. C++의 문자열을 사용하기 위해서는 string 헤더 파일이 필요합니다.
#if 0
int main()
{
    char str1[] = "hello";
    const char* str2 = "hello";

    if (strcmp(str1, str2) == 0) {
        printf("같은 문자열\n");
    }

    char str3[32];
    // str3 = "hello";
    strcpy(str3, str2);
    strcat(str3, " world");
    printf("%s\n", str3);

    printf("%lu\n", strlen(str3));
}
#endif

#if 1
int main()
{
    std::string s1 = "hello";
    std::string s2 = "hello";

    // == 연산자를 통해서 문자열을 비교할 수 있습니다.
    if (s1 == s2) {
        cout << "같은 문자열" << endl;
    }

    std::string s3;
    s3 = s2;
    cout << s3 << endl;

    // s3 = s3 + " world";
    s3 += " world";
    cout << s3 << endl;

    cout << s3.size() << endl;
}
#endif