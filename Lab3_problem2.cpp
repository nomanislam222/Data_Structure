#include<iostream>
using namespace std;

void encode(string s, int j){
char ch;
for(int i = 0; s[i] != '\0'; ++i){
ch = s[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch + j;
if(ch > 'z'){
ch = ch - 'z' + 'a' - 1;
}
s[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch + j;
if(ch > 'Z'){
ch = ch - 'Z' + 'A' - 1;
}
s[i] = ch;
}
}
cout << "Converted String: " << s;
}



int main()
{
cout << "Sample String(s): I am a student" << endl << "Sample Integer(j): 2"<<endl;
encode("I am a student",2);
return 0;
}
