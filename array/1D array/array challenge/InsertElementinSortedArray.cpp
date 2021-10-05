//inser element in already sorted array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class array1
{
public:
    int arr[10];
    int size;
    int length;

    void display(array1 a)
    {
        for(int i=0; i<a.length ; i++)
        {
            cout<<a.arr[i];
        }

    }
};

int main()
{
    array1 a1;
    a1.arr = {1,2,4,5,6,7,8,9};
    a1.length=8;
    a1.size=10;
    a1.display(a1);
}