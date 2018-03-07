#include <iostream>
#include "fifo.h"


int main() {

	fifo_string test_obj;
	test_obj.push("PROI1");
	test_obj.push("PROI2");
	test_obj.push("PROI3");
	test_obj.push("PROI4");

	test_obj.take();

        test_obj.push("PROI5");
        test_obj.push("PROI6");

	//test_obj.get(2);
	std::cout<<test_obj << std::endl << "Objekt nr:"<< 2 << "=" << test_obj.get(2) << std::endl;
	return 0;
}
