#include <iostream>
using namespace std;
#include "STRING.h"


STRING::STRING()
{
    //Default Allocation where num=1k . Intially all the string objects are given 1000 characters space (AVOID memory wastage). But upon extra demnad , it can be detected and reallocated
    num=1000;
    value=new char[1000];
    MAKE_NULL();
}    
STRING::STRING(int x)
{
    if(x>0) 
    {
        num=x;
        value=new char[num];
        MAKE_NULL();

    } 
    else 
    {
        //On invalid value , Default portion is executed
        num=1000;
        value=new char[1000];
        MAKE_NULL();

    } 
}
STRING::STRING(string x)
{
    num=1000;
    value=new char[1000];
    MAKE_NULL();

    for(int i=0 ; x[i]!='\0';i++)
    {
        value[i]=x[i];
    }
}
STRING::STRING(STRING &x)
{
    num=x.num;
    value=new char[num];
    for(int i=0 ; i<num;i++)
    {
        value[i]=x.value[i];
    }
}

void STRING::MAKE_NULL()
{
    for(int i=0 ; i<num ; i++)
    {
        value[i]='\0';
    }
}

int STRING::LENGTH()
{
    int count=0 ;
    for( ; value[count]!='\0'; count++);
    return count;
} 