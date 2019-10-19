#include <iostream>
using namespace std;
// function tri_styl() takes a string and displays it in a triangular style.
void tri_styl(char *str)
{
  for(int i=0; str[i]!='\0'; i++)
  {
     cout<<'\n';
     for(int j=0; j<=i; j++)
     {
	cout<<str[j];
     }
  }
}
int main() 
{
    cout << "Hello, World!";
    char str1[]="Hello";
    char str2[]="World";
    tri_styl(str1);
    tri_styl(str2);
    return 0;
}
