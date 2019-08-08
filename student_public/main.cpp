//
//  main.cpp
//  student_public
//
//  Created by fengsh on 2019/8/8.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include <iostream>
#include <string>
#include "student.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    Student1 stud1(10010,"Wang-li",'f',19,"115 Beijing Road,Shanghai");
    Student1 stud2(10011,"Zhang-fun",'m',21,"213 Shanghai Road,Beijing");
    stud1.show();
    stud2.show();
    return 0;
}
