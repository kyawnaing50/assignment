#include <iostream>
#include <string>
using namespace std;
int main()
{
    char string[10];
    char *str1 = "Hello World"; // pointer ဖြင့် ကြေငြာ ၊
    strcpy(string, str1);       // "abcdef" ကို  string array ထဲ copy ကူးတာ ၊
    printf("%s\n", string);
    return 0;
}
