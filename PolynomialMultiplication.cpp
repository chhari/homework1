// AUTHOR hari saran chhari@bu.edu
#include <iostream>
#include <vector>

using namespace std;

typedef vector<double> Poly;
typedef string BigInt;

BigInt multiply_int(const BigInt &a,const BigInt &b)
{
    BigInt temp_a = a;
    BigInt temp_b = b;
    BigInt result2;
    for(int i=0; i < a.size() ; i++)
    {
        temp_a = a[i] - '0';
    }
    for(int i=0; i < b.size() ; i++)
    {
        temp_b = b[i] - '0';
    }
    for(unsigned int i = 0;i < (a.size()+b.size()-1);i++)
    {
         for(unsigned int j = 0; j < b.size();j++)
        {
            result2[i+j] += temp_a[i]*temp_b[j];
        }
    }
    for(int i=0;i < result2.size();i++)
    {
        if (result2[i] > 9)
        {
            result2[i+1] += result2[i]/10;
        }
        else
        {
            result2[i] = result2[i]
        }
    }
    return result2;

}

int main()
{

  BigInt A,B;

  cin >> A >> B;

  cout << multiply_int(A,B) << endl;
}
