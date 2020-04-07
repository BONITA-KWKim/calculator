#include <iostream>
#include "basic.h"

int main(int argc, char **argv) {
	std::cout << "Hello world, again" << std::endl;

	BasicOperation *basic_op = new BasicOperation();
	std::cout << basic_op->sum(2,1) << std::endl;
	std::cout << basic_op->substract(2,1) << std::endl;
	std::cout << basic_op->multiple(2,1) << std::endl;
	std::cout << basic_op->divide(2,1) << std::endl;

	return 0;
}

