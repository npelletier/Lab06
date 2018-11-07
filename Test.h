/**
*	@file LinkedListOfInts.h
*	@author
*	@date
*	@brief A header file for Linked List class
*/

#pragma once

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class TestSuite
{
public:
  /**
  * @brief Creates an empty list and verifies isEmpty() returns true
  **/
  void emptyListTrue();

  /**
  * @brief Creates an empty list, populates it and verifies isEmpty() returns false
  **/
  void emptyListFalse();

  /**
  * @brief Creates an empty list and verifies size is 0
  **/
  void sizeEmptyList();

  /**
  * @brief verifies inserting at front increases size by 1
  **/
  void sizeAddFront();

  /**
  * @brief verifies inserting at back increases size by 1
  **/
  void sizeAddBack();

  /**
  * @brief verifies removing at front decreases size by 1
  **/
  void sizeRemoveFront();

  /**
  * @brief verifies removing at back decreases size by 1
  **/
  void sizeRemoveBack();

  /**
  * @brief verifies entry is placed in correct spot
  **/
  void entryAddFront();

  /**
  * @brief verifies entry is placed in correct spot
  **/
  void entryAddBack();

  /**
  * @brief verifies entry is removed in correct spot
  **/
  void entryRemoveFront();

  /**
  * @brief verifies entry is removed in correct spot
  **/
  void entryRemoveBack();

  /**
  * @brief verifies search correctly locates the serached value
  **/
  void search();


  /**
  * @brief runs all of the tests
  **/
  void runTests();
};
