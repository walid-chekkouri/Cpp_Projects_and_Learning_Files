#include <iostream>
#include <chrono>

#include "night.h"

int main() {

	// Measure time taken for goodnight1():
	std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

	std::cout << goodnight1("tulip");//try goodnight2() too

	std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> time_span = end - start;

	// Print time taken for goodnightX():
	std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";



	system("pause");
	return 0;
}

/*
InLine?
Why to use –
In many places we create the functions for small work / functionality which contain simpleand less number of executable instruction.Imagine their calling overhead each time they are being called by callers.
When a normal function call instruction is encountered, the program stores the memory address of the instructions immediately following the function call statement, loads the function being called into the memory, copies argument values, jumps to the memory location of the called function, executes the function codes, stores the return value of the function, and then jumps back to the address of the instruction that was saved just before executing the called function.Too much run time overhead.
The C++ inline function provides an alternative.With inline keyword, the compiler replaces the function call statement with the function code itself(process called expansion) and then compiles the entire code.Thus, with inline functions, the compiler does not have to jump to another location to execute the function, and then jump back as the code of the called function is already available to the calling program.
With below pros, consand performance analysis, you will be able to understand the “why” for inline keyword
Pros : -
	1.	It speeds up your program by avoiding function calling overhead.
	2.	It save overhead of variables push / pop on the stack, when function calling happens.
	3.	It save overhead of return call from a function.
	4.	It increases locality of reference by utilizing instruction cache.
	5.	By marking it as inline, you can put a function definition in a header file(i.e.it can be included in multiple compilation unit, without the linker complaining)

	Cons : -
	1.	It increases the executable size due to code expansion.
	2.	C++ inlining is resolved at compile time.Which means if you change the code of the inlined function, you would need to recompile all the code using it to make sure it will be updated
	3.	When used in a header, it makes your header file larger with information which users don’t care.
	4.	As mentioned above it increases the executable size, which may cause thrashing in memory.More number of page fault bringing down your program performance.
	5.	Sometimes not useful for example in embedded system where large executable size is not preferred at all due to memory constraints.

	When to use -
	Function can be made as inline as per programmer need.Some useful recommendation are mentioned below -
	1. Use inline function when performance is needed.
	2. Use inline function over macros.
	3. Prefer to use inline keyword outside the class with the function definition to hide implementation details.
	
	
	NB:
	The inline functions are a C++ enhancement feature to increase the execution time of a program. Functions can be instructed to compiler to make them inline so that compiler can replace those function definition wherever those are being called. Compiler replaces the definition of inline functions at compile time instead of referring function definition at runtime.
NOTE- This is just a suggestion to compiler to make the function inline, if function is big (in term of executable instruction etc) then, compiler can ignore the “inline” request and treat the function as normal function.
	*/