#include <iostream>
#include <cstring>
using namespace std;

void MakeSentenceExcited(char* sentenceText) { //pointer from function call to definition

   for(int i = 0; i < strlen(sentenceText); ++i){ //have to use strlen() to get string size
   if (sentenceText[i] == '.') {
       sentenceText[i] = '!';
      }
   }
}

int main() {
   const int TEST_STR_SIZE = 50;
   char testStr[TEST_STR_SIZE];

   strcpy(testStr, "Hello. I'm Miley. Nice to meet you.");
   MakeSentenceExcited(testStr);
   cout << testStr << endl;

   return 0;
}
