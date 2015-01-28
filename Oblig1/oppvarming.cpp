#include <iostream>

using namespace std;

long long msg1 { 28539401679696455 };

int msg2[] { 1918986818, 1998611822, 1684829551, 544483182, 1701538156,
		1768453152, 8563 };

int encrypted[] { 1498105673, 1227249735, 1498829639, 1196119078, 1314530904,
		1197024843, 5853000 };

void decryptMsg1() {
   char* c_msg1 = (char) *msg1;

   for(int i = 0; i< 5; i++){
    cout << c_msg1++;
   }
}

int main() {

   // Print out the messages in human-readable form!

   cout << "Message 1: " << "?" << endl;
   cout << "Message 2: " << "?" << endl;
   cout << "Decrypted: " << "?" << endl;

//    decryptMsg1();
}
