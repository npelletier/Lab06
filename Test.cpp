#include <iostream>
#include <vector>
#include "Test.h"
#include "LinkedListOfInts.h"
#include "List.h"
#include "Node.h"

/**
* @brief Creates an empty list and verifies isEmpty() returns true
**/
void TestSuite::emptyListTrue()
{
  // LinkedListOfInts test;
  // std::cout << "\nisEmpty returns True when list is empty: ";
  // if(test.isEmpty())
  // {
  //   std::cout << "Passed";
  // }
  // else
  // {
  //   std::cout << "Failed";
  // }
}

/**
* @brief Creates an empty list, populates it and verifies isEmpty() returns false
**/
void TestSuite::emptyListFalse()
{
  // LinkedListOfInts test;
  // test.addFront(1);
  // std::cout << "\nisEmpty returns False when list is empty: ";
  // if(test.isEmpty())
  // {
  //   std::cout << "Failed";
  // }
  // else
  // {
  //   std::cout << "Passed";
  // }
}

/**
* @brief Creates an empty list and verifies isEmpty() returns true
**/
void TestSuite::sizeEmptyList()
{
  // LinkedListOfInts test;
  // std::cout << "\nSize of empty list is zero: ";
  // if(test.size()==0)
  // {
  //   std::cout << "Passed";
  // }
  // else
  // {
  //   std::cout << "Failed";
  // }
}

/**
* @brief verifies inserting at front increases size by 1
**/
void TestSuite::sizeAddFront()
{
  // LinkedListOfInts test;
  // test.addFront(5);
  // test.addFront(10);
  // std::cout << "\nSize returns correct value after inserting at front of list: ";
  // if(test.size()==2)
  // {
  //   std::cout << "Passed";
  // }
  // else
  // {
  //   std::cout << "Failed";
  // }
}

/**
* @brief verifies inserting at back increases size by 1
**/
void TestSuite::sizeAddBack()
{
  // LinkedListOfInts test;
  // test.addBack(5);
  // test.addBack(10);
  // std::cout << "\nSize returns correct value after inserting at back of list: ";
  // if(test.size()==2)
  // {
  //   std::cout << "Passed";
  // }
  // else
  // {
  //   std::cout << "Failed";
  // }
}

/**
* @brief verifies removing at front decreases size by 1
**/
void TestSuite::sizeRemoveFront()
{
  // LinkedListOfInts test;
  // test.addFront(5);
  // test.addFront(10);
  // test.removeFront();
  // std::cout << "\nSize returns correct value after adding and removing from front of list: ";
  // if(test.size()==1)
  // {
  //   std::cout << "Passed";
  // }
  // else
  // {
  //   std::cout << "Failed";
  // }
}

/**
* @brief verifies removing at back decreases size by 1
**/
void TestSuite::sizeRemoveBack()
{
  // LinkedListOfInts test;
  // test.addFront(5);
  // test.addFront(10);
  // test.removeBack();
  // std::cout << "\nSize returns correct value after adding and removing from back of list: ";
  // if(test.size()==1)
  // {
  //   std::cout << "Passed";
  // }
  // else
  // {
  //   std::cout << "Failed";
  // }
}

void TestSuite::entryAddFront()
{
  std::vector<int> testControl{ 5, 10};
  std::vector<int> testControl2{ 'a', 5, 10};
  LinkedListOfInts test;
  std::cout << "\nisEmpty returns True when list is empty: ";
  if(test.isEmpty())
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";
  }
  std::cout << "\nSize of empty list is zero: ";
  if(test.size()==0)
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";
  }
  test.addFront(10);
  std::cout << "\nisEmpty returns False when list is not empty: ";
  if(test.isEmpty())
  {
    std::cout << "Failed";
  }
  else
  {
    std::cout << "Passed";
  }
  test.addFront(5);
  std::cout << "\naddFront places the added value in the correct location: ";
  if(test.toVector() == testControl)
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";
  }
  std::cout << "\nSize returns correct value after inserting at front of list: ";
  if(test.size()==2)
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";
  }
  test.addFront('a');
  std::cout << "\naddFront only allows ints to be input: ";
  if(test.toVector() == testControl2)
  {
    std::cout << "Failed";
  }
  else
  {
    std::cout << "Passed";
  }
}

void TestSuite::entryAddBack()
{
  std::vector<int> testControl1{ 'a', 15, 10, 5,};
  std::vector<int> testControl{ 5, 10, 15};
  LinkedListOfInts test;
  test.addBack(5);
  test.addBack(10);
  test.addBack(15);
  std::cout << "\naddBack places the added value in the correct location: ";
  std::vector<int> testcomp = test.toVector();
  if(test.toVector() == testControl)
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";//: [" << testcomp[0] << ", " << testcomp[1] << ", " << testcomp[2] << "]";
  }
  std::cout << "\nSize returns correct value after inserting at back of list: ";
  if(test.size()==3)
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed: " << test.size();
  }
  test.addBack('a');
  std::cout << "\naddFront only allows ints to be input: ";
  if(test.toVector() == testControl1)
  {
    std::cout << "Failed";
  }
  else
  {
    std::cout << "Passed";
  }
}

void TestSuite::entryRemoveFront()
{
  std::vector<int> testControl{ 10, 15};
  LinkedListOfInts test;
  std::cout << "\nremoveFront returns false when called on an empty Linked List: ";
  if(test.removeBack())
  {
    std::cout << "Failed";

  }
  else
  {
    std::cout << "Passed";// [" << testcomp[0] << ", " << testcomp[1] << ", " << testcomp[2] << "]";
  }
  test.addFront(15);
  test.addFront(10);
  test.addFront(5);
  test.removeFront();
  std::cout << "\nremoveFront removes the first value in the Linked List: ";
  if(test.toVector() == testControl)
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";
  }
  std::cout << "\nremoveFront returns true when the front element is removed: ";
  if(test.removeBack())
  {
    std::cout << "Passed";

  }
  else
  {
    std::cout << "Failed";// [" << testcomp[0] << ", " << testcomp[1] << ", " << testcomp[2] << "]";
  }
  std::cout << "\nSize returns correct value after adding and removing from front of list: ";
  if(test.size()==2)
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";
  }
}

void TestSuite::entryRemoveBack()
{
  std::vector<int> testControl{ 10, 15};
  LinkedListOfInts test;
  std::cout << "\nremoveBack returns false when called on an empty list: ";
  if(test.removeBack())
  {
    std::cout << "Failed";

  }
  else
  {
    std::cout << "Passed";// [" << testcomp[0] << ", " << testcomp[1] << ", " << testcomp[2] << "]";
  }
  test.addFront(15);
  test.addFront(10);
  test.addFront(5);
  test.removeBack();
  std::vector<int> testcomp = test.toVector();
  std::cout << "\nremoveBack removes the last value in the Linked List: ";
  if(test.toVector() == testControl)
  {
    std::cout << "Passed";

  }
  else
  {
    std::cout << "Failed";// [" << testcomp[0] << ", " << testcomp[1] << ", " << testcomp[2] << "]";
  }
  std::cout << "\nremoveBack returns true when the back element is removed: ";
  if(test.removeBack())
  {
    std::cout << "Passed";

  }
  else
  {
    std::cout << "Failed";// [" << testcomp[0] << ", " << testcomp[1] << ", " << testcomp[2] << "]";
  }

  std::cout << "\nSize returns correct value after adding and removing from back of list: ";
  if(test.size()==2)
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";
  }
}

void TestSuite::search()
{
  LinkedListOfInts test;
  test.addFront(15);
  test.addFront(10);
  test.addFront(5);
  test.addFront('a');
  std::cout << "\nSearch returns true when the value searched is in the list: ";
  if(test.search(5))
  {
    std::cout << "Passed";
  }
  else
  {
    std::cout << "Failed";
  }
  std::cout << "\nSearch returns false when the value searched is not in the list: ";
  if(test.search(20))
  {
    std::cout << "Failed";
  }
  else
  {
    std::cout << "Passed";
  }
  std::cout << "\nSearch value must be an int in a linked list of ints: ";
  if(test.search('a'))
  {
    std::cout << "Failed";
  }
  else
  {
    std::cout << "Passed";
  }


}


void TestSuite::runTests()
{
  emptyListTrue();
  emptyListFalse();
  sizeEmptyList();
  sizeAddFront();
  sizeAddBack();
  sizeRemoveFront();
  sizeRemoveBack();
  entryAddFront();
  entryAddBack();
  entryRemoveFront();
  entryRemoveBack();
  search();
  std::cout << "\n";
}
