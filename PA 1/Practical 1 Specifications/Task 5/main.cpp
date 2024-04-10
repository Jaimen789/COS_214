#include<iostream>
using namespace std;
unsigned long long ackerman(unsigned long long m, unsigned long long n);
int rec(int n, int a, int c);
int Rec(int n);

int main()
{
    cout << "/////////////////////////////////5.1////////////////////////////////////////" << endl;

    int val;
    cout << "Enter a number: ";
    cin >> val;
    int val2 = val;
    int cnt = 0;
    cout << "The sequence is: " << rec(val,val2,cnt) << endl;

    //call rec(int,int,int)

    cout << "/////////////////////////////////5.2////////////////////////////////////////" << endl;

    unsigned long long m, n;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The Ackermann function is: " << ackerman(m, n) << endl;
    return 0;
}

int Rec(int n)
{
    if(n < 0) return 0;
    else 
        
        return Rec(n - 1) + 7;
}


////////////////////////////// 5.2 //////////////////////////////////
unsigned long long ackerman(unsigned long long m, unsigned long long n)
{
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return ackerman(m - 1, 1);
    else
        return ackerman(m - 1, ackerman(m, n - 1));
}

//implement a recursive function where  Output = 20, 13, 6, -1, 6, 13, 20 and input is 20
//

int rec(int num, int n , int count){
    if( n == num){
        if(count == 0){
            cout << n << " ,";
            return rec(num, n-7, count);
        }
        else{
            cout << n << endl;
            return n;
        }
    }
    if(n > 0 && count == 0){
        cout << n << " ,";
        return rec(num, n-7, count);
    }
    else if(n > 0 && count != 0){
        cout << n << " ,";
        return rec(num, n+7, count);
    }
    else if (n <= 0){
        cout << n << " ,";
        return rec(num, n+7, count+1);
    }
    return n;

}
