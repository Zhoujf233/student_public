//
//  student.hpp
//  student_public
//
//  Created by fengsh on 2019/8/8.
//  Copyright © 2019 fengsh. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <iostream>
using namespace std;
#include<string>

class Student
{
public:
    Student(int n,string nam,char s):num(n),name(nam),sex(s){}
    ~Student(){}
protected:
    int num;
    string name;
    char sex;
};

class Student1:public Student
{
public:
    Student1(int n,string nam,char s,int a,string ad):Student(n,nam,s),age(a),addr(ad){}
    void show();
    ~Student1(){}
private:
    int age;
    string addr;
};


#endif /* student_hpp */
