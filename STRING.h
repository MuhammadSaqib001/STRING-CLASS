#pragma once

#ifndef STRING_H
#define STRING_H

#include<iostream>
using namespace std;

class STRING
{
        public :

        char* value;
        int num;

        STRING();    
        STRING(int x);
        STRING(string x);
        STRING(STRING &x);
        void MAKE_NULL();
        int LENGTH();

};
#include "STRING.cpp"
#endif
