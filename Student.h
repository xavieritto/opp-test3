/*
 Do not edit this class
*/
#pragma once
#ifndef STUDENT_H // include guard
#define STUDENT_H

#include <string>

using namespace std;

namespace OOP {
    class Student {
        private:
            int id;
            string name;
            Student(){} //Does nothing
        public:
            Student(int id, string name);
            int getID();
            string getName();
    };
}

#endif