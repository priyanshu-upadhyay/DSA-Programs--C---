#include <bits/stdc++.h>
using namespace std;
int capacity = 6;
int* arr = new int[capacity]{0};

int i = -1, j = 6;

void push1(int x)
{

    if(i+1 == j)
    {
        cout<<"No Space\n";
    }
    else
    {
        i++;
        arr[i] = x;
    }
}
void push2(int x)
{
    
    if(i == j-1)
    {
        cout<<"No Space\n";
    }
    else
    {
        j--;
        arr[j] = x;
    }
}

void pop1()
{
    if(i == -1)
    {
        cout<<"Already Empty\n";
    }
    else
    {
        i--;
    }
}

void pop2()
{
    if(j == 6-1)
    {
        cout<<"Already Empty\n";
    }
    else
    {
        j++;
    }
}

void size1()
{
    cout<<i+1;
}

void size2()
{
    cout<<6-j;
}
void showStack1()
{
    for (int k = 0; k <= i; k++)
    {
        cout<<arr[k]<<" ";
    }
}
void showStack2()
{
    for (int k = 6-1; k >= j; k--)
    {
        cout<<arr[k]<<" ";
    }
}

int main() 
{ 
    #ifndef INPUT_OUTPUT
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif
    push1(10);
    push1(20);
    push1(30);

    pop1();

    pop1();

    pop1();



    push2(-10);
    push2(-20);
    push2(-30);
    push2(-40);
    push2(-50);
    push2(-60);

    push1(10);
    push1(10);
    pop2();
    showStack1();
    cout<<"\n";
    showStack2();
	return 0;
} 
