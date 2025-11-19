//binary number system

#include<iostream>
using namespace std;

int decToBinary(int decNum);
int binTODecimal (int biNum);

int main()
{
    int i;
    for(i=1;i<=10;i++){
    cout<<decToBinary(i)<<endl;
    }
    cout<< binTODecimal(101)<<endl;//5
    return 0;
}

    //convert decimal to binary
    int decToBinary(int decNum)
    {
        int result= 0, pow=1;
        while(decNum>0)
        {
            int rem = decNum % 2;
            decNum = decNum /2;

            result += (rem*pow);
            pow *= 10;
        }
        return result;
    }

         //convert binary to decimal
        int binTODecimal (int biNum)
        {
            int result=0,pow=1;
            while(biNum>0)
            {
                int rem= biNum % 10;
                result += rem * pow;
                biNum = biNum/10;
                pow*=2;
            }
            return result;//decimal number
        }





