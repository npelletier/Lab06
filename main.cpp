/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	TestSuite myTester;
	myTester.runTests();
	return (0);

}

/*

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

#include "LinkedListOfInts.h"

TEST_CASE("....")
{

}



*/
