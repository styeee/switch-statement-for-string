#include <iostream>
using namespace std;
#include <map>//array with keys
#include <string_view>//very flexable string
#include <string>

int main()
{
    //array with functions
    map<string_view,void(*)()>answers=
    {
        make_pair("how u doing?",[]()
        {
            cout<<"ne znau"<<endl;
        }),

        make_pair("hi",[]()
        {
            cout<<"good"<<endl;
        })
    };

    while(true)
    {
        string text;
        cin>>text;
        void(*f)()=answers[text.c_str()];//f=answers[text]

        if(f)f();//default:
        else cout<<"?"<<endl;
    }
    
    return 0;
};
