#include <iostream>
using namespace std;
// function tri_styl() takes a string and displays it in a triangular style.
/*void tri_styl(char *str)
{
  for(int i=0; str[i]!='\0'; i++)
  {
     cout<<'\n';
     for(int j=0; j<=i; j++)
     {
	cout<<str[j];
     }
  }
}*/
int main() 
{
    cout << "Hello, World!";
    string str1="Hello";
    string str2="World";
    for(int i=0;i<=str1.length();i++)
    {
	    for(int j=0;j<i;j++)
	    {
		    cout<<str1[j];
	    }
	    cout<<endl;
    }
	for(int i=0;i<=str2.length();i++)
    {
	    for(int j=0;j<i;j++)
	    {
		    cout<<str2[j];
	    }
	    cout<<endl;
    }
    return 0;
}
