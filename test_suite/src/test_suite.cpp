#include "test_suite.h"
#include "color.h"

/* Constructor */
test_suite::test_suite() : _test_suite_store(new std::unordered_map<std::string, test_suite_func>()) {}

void test_suite::add(std::string key, test_suite_func val) {
    auto it = _test_suite_store->find(key);

    if (it != _test_suite_store->end()) {
        std::cout << "Function < " << key << "> already exist" << std::endl;
        return;
    }

    (*_test_suite_store)[key] = val;
}

void test_suite::remove(std::string key) {
    _test_suite_store->erase(key);
}

test_suite_func test_suite::operator[] (std::string key) {
    auto it = _test_suite_store->find(key);

    if (it == _test_suite_store->end()) {
        return nullptr;
    }

    return it->second;
}

void test_suite::run(std::string key) {
    test_suite_func it = (*this)[key];

    if (!it) {
        std::string err_msg = "Test <" + key + "> doesn't exist";
        std::cerr << err_msg << std::endl;
        return;
    }

    test_message(key, it());
}

void test_suite::run_all() {
	int total_tests = _test_suite_store->size();
	int passed_tests = 0;
	int failed_tests = total_tests - passed_tests;
	int index = 1;
	
	for (auto it = _test_suite_store->begin(); it != _test_suite_store->end(); it++) {
		std::cout << index << ". ";
		bool correct = test_message(it->first, it->second());
		if (correct) {
			passed_tests++;
		}
		index++;
	}

	std::cout << std:: endl;
	std::cout << "Statistics" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "Total Test Cases Passed: " << passed_tests << "/" << total_tests << std::endl;
	std::cout << "Total Test Cases Failed: " << failed_tests << "/" << total_tests << std::endl;
	std::cout<< "Percentage of Tests Cases Passed: " << (passed_tests * 1.0 / failed_tests) * 100 << "%" << std::endl;
}

bool test_suite::test_message(std::string msg, bool result) {
	if (result) {
		std::cout << msg << ": " << Color::colored_message("PASSED", Color::FG_GREEN) << std::endl;
	} else{
		std::cout << msg << ": " << Color::colored_message("FAILED", Color::FG_RED) << std::endl;
	}

	return result;
}