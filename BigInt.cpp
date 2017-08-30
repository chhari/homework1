// AUTHOR hari saran chhari@bu.edu

#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef string BigInt;
typedef vector<int> Poly;

BigInt multiply_int(const BigInt &a,const BigInt &b)
{
    Poly c;
    Poly d;
    Poly result2;

    c.resize(a.size(),0);
    d.resize(b.size(),0);
    result2.resize((a.size() + b.size()), 0);
    BigInt result;

    for(int i=0; i < a.size() ; i++)
    {
        c[i] = int(a[i] - '0');
    }
    for(int i=0; i < b.size() ; i++)
    {
        d[i] = int(b[i] - '0');
    }
    for(int i = 0;i < a.size();i++)
    {
         for(int j = 0; j < b.size();j++)
        {
            result2[i+j+1] += c[i]*d[j];
        }
    }
	int change = 1;
	while(change == 1)
	{
		change = 0;
		for(int i=0;i < result2.size();i++)
		{
			if(result2[i] > 9)
			{
			   result2[i - 1] += result2[i]/10;
			   result2[i] = result2[i]%10;
			   change = 1;
			}
		}
	}
    for(int i=0;i < result2.size();i++)
    {
        result += (char(result2[i]) + '0');
    }
    /*for(int i = 0; i>result.size(); i++)
    {
	cout<<result[i];
    }*/
    return result;
}


/*int main()
{
	BigInt A = "123456", B = "123456";
	BigInt c = multiply_int(A,B);
	cout<<c;
}*/
