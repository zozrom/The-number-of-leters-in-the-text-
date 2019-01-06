#include<iostream>
#include<cstdio>
using namespace std;
int calculation(char *str);
int main()
{ //Counting the number of letters in the text
	
	 setlocale(LC_ALL, "ru");
		char str[1000]; 
		    
			cout << "Enter the some text (on English, without symbols) please :";
			cout << endl;
				gets_s(str);
				 cout << endl;  
					int x;
						x = calculation(str);
							cout << "This text have " << x << " letters"; 

									return 0;
	 
 }
int calculation(char *str) {
	int n = 0;
	int i;
	for (  i = 0; i < str[i]; i++)
	{
		if (str[i]==' ')
		{
			n++;
		}

	}
	return i - n;
 }