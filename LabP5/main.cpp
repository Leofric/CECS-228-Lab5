//
//  main.cpp
//  LabP5
//
//  Created by Alex Berthon on 10/10/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include <iostream>
#include "Student.hpp"

int main(int argc, const char * argv[]) {
    
    struct Student list[3];
    
    strcpy(list[0].name, "Tom");
    strcpy(list[1].name, "Emily");
    strcpy(list[2].name, "Chad");
    
    list[0].ID = 0;
    list[1].ID = 1;
    list[2].ID = 2;
    
    list[0].birthDay = myDate(4,8,2010);
    list[1].birthDay = myDate(2,11,2000);
    list[2].birthDay = myDate(11,14,2004);
    
    list[0].grade = 74;
    list[1].grade = 60;
    list[2].grade = 90;

    printf("%-20s" "%-20s" "%-20s" "%-20s\n", "Student ID", "Name", "Birthday", "Grade");
    char a[20];
    for(int i = 0; i<3; i++){
        list[i].birthDay.display(a);
        printf("%-20i" "%-20s" "%-20s" "%-20i\n",list[i].ID, list[i].name, a, list[i].grade);
        }
        std::cout<<std::endl;
}
