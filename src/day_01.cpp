
#include<iostream>
using namespace std;

int main(int argc,char ** argv)
{
    int x=10;
    cout<<&x<<endl;
    short sn=100;
    cout<<&sn<<endl;
    //定义一个int型指针变量，并初始化
    int *pInt=&x;//pInt 是int *型.pInt指向的类型：int型
    cout<<pInt<<endl;
    //
    cout<<"hello world"<<endl;
    return 0;
}