#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
	cout<<"Figure out - by youre self its just specialized multiplication of two numbers"<<endl;
	long long int sum = 0;
	int temp = 0;
	char ch;				// to get character input
  	int n[20];			//Number to multiply
  	int m[20];          //Number to mutiply
  	int i = 0;			// iterator
  	do
  	{
    	ch = fgetc(stdin);
    	if ( isdigit(ch) )
    	{
      		n[i++] = ch - 48; // convert ASCII to int
    	}
  	}
  	while (isdigit(ch) && i < sizeof(n)/sizeof(n[0]));
  	int j = i;
  	i = 0;
	do
  	{
    	ch = fgetc(stdin);
    	if ( isdigit(ch) )
    	{
      		m[i++] = ch - 48; // convert ASCII to int
    	}
  	}
  	while (isdigit(ch) && i < sizeof(m)/sizeof(m[0]));
  	swap(i , j);
  	    //***********************************input ends here**************************************
    int start = clock();
	j--;
    i--;
    int c = j;
    int b = 1;        // for 10 multiples
    int temp1 = j;                 
      while (i >= 0)
      {
          j = temp1;
          while (j >= 0)
          {
            for (int g = 1; g <= m[j]; g++)
            {
               temp = temp + n[i];
            }
              
            for (int u = 0; u<b-2; u++)
            {
            	temp = temp + temp;
			}
            sum = sum + temp;
            j = j -1;
            temp = 0;
            b = b * 10;
        }
        i = i - 1;
        b = b/pow(10,c);
      }
      int end = clock();
      cout<<sum;
      cout<<endl<< "start = "<<start<<"end = "<<end;
      
      
}
