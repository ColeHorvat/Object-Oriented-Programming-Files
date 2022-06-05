cmake_minimum_required(VERSION 3.22)
project(COMP_3141_Files)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("Case Study")

add_executable(COMP_3141_Files
        "Case Study/Employee.cpp"
        "Case Study/Employee.h"
        "Case Study/HourlyEmployee.cpp"
        "Case Study/HourlyEmployee.h"
        "Case Study/prog32.cpp"
        "Case Study/SalariedEmployee.cpp"
        "Case Study/SalariedEmployee.h"
        BasePlusCommissionEmployee.cpp
        BasePlusCommissionEmployee.h
        ClientData.cpp
        ClientData.h
        CommissionEmployee.cpp
        CommissionEmployee.h
        distance.cpp
        DivideByZeroException.h
        Employee.cpp
        Employee.h
        fig07_21.cpp
        fig08_17.cpp
        Fig15_04.cpp
        Fig15_14.cpp
        Fig15_19.cpp
        Fig17_02.cpp
        fig7_20.cpp
        GradeBook.h
        prog1.cpp
        prog10.cpp
        prog11.cpp
        prog12.cpp
        prog13.cpp
        prog14.cpp
        prog15.cpp
        prog16.cpp
        prog17.cpp
        prog18.cpp
        prog18B.cpp
        prog19.cpp
        prog2.cpp
        prog20.cpp
        prog21.cpp
        prog22.cpp
        prog23.cpp
        prog24.cpp
        prog25.cpp
        prog26.cpp
        prog27.cpp
        prog28.cpp
        prog3.cpp
        prog30.cpp
        prog31.cpp
        prog32.cpp
        Prog33.cpp
        prog34.cpp
        prog35.cpp
        prog36.cpp
        prog37.cpp
        prog38.cpp
        prog39.cpp
        prog4.cpp
        prog40.cpp
        prog41.cpp
        prog5.cpp
        prog6.cpp
        prog7.cpp
        prog8.cpp
        prog9.cpp
        Time.cpp
        Time.h)
