
#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    int x = 10;
    cout << &x << endl;
    short sn = 100;
    cout << &sn << endl;
    //定义一个int型指针变量，并初始化
    int *pInt = &x; //pInt 是int *型.pInt指向的类型：int型
    cout << pInt << endl;
    //pInt=0x
    // pInt = 0;
    pInt = NULL;
    cout << pInt << endl;

    int n = 0;
    pInt = &n;
    pInt = &n;
    *pInt = 45;
    cout<<*pInt<<endl;
    cout<<pInt<<endl;
    cout << "sizeof(int ×)" << sizeof(int *) << endl;
    cout << "sizeof(char ×)" << sizeof(char *) << endl;
    cout << "sizeof(short ×)" << sizeof(short *) << endl;
    cout << "sizeof(dobule ×)" << sizeof(double *) << endl;
    cout << "sizeof(int)" << sizeof(int) << endl;
    cout<<"************ 分割符 ***************"<<endl;//*取内容，读取几个字节看指针指向的类型
    int n2=0x12345678;
    short *pShort=(short *)&n2;
    int *pint_n2=&n2;
    char *pchar_n2=(char *)&n2;
    cout<<hex<<"pint_n2 :"<<*pShort<<endl;
    cout<<hex<<"pint_n2 :"<<*pint_n2<<endl;
    cout<<hex<<"pchar_n2 :"<<*pchar_n2<<endl;
    *pShort=10;
    cout<<n2<<endl;
    cout<<"-------------------------"<<endl;
    int n3[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout<<n3<<endl;
    cout<<&n3[0]<<endl;
    cout<<&n3[1]<<endl;
    cout<<&n3[2]<<endl;
    cout<<&n3[0][0]<<endl;
    // cout<<&n3[3]<<endl;
    // cout<<&n3[4]<<endl;
    cout<<n3<<endl;
    cout<<n3[0]<<endl;
    cout<<n3[0][0]<<endl;
    // cout<<
    int m[5]={1,2,3,4,5};
    cout<<*((int*)(&m+1)-1)<<endl;
    // cout << "hello world" << endl;
    return 0;
}