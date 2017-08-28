/* 
Author: Yicheng Gong
Date: August 27th, 2017
*/

/* A Testing Suite for Unit Testing */
#ifndef TESTSUITE_H
#define TESTSUITE_H

#include <iostream>
#include <unordered_map>

typedef bool (*test_suite_func)();

class test_suite {
    public:
        /* Constructor */
        test_suite();
        test_suite(std::string);

        /* Add <Test Name, Test Function> to Test Suite */
        void add(std::string, test_suite_func);

        /* Remove <Test> from Test Suite */
        void remove(std::string);

        /* Overloading [] operator */
        test_suite_func operator[] (std::string);

        /* Run a single <Test> based on <Test Name> */
        void run(std::string);

        /* Runs all <Test> in Test Suite */
        void run_all();

    private:
        bool _test_message(std::string, bool);

        std::unordered_map<std::string, test_suite_func>* _test_suite_store;

        std::string _title;
};

#endif