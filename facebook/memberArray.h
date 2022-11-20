#ifndef __MEMBERARRAY_H
#define __MEMBERARRAY_H

#include <iostream>
using namespace std;

//#include "member.h"
class Member;

class MemberArray
{
	Member** friends;
	int numOfFriends;
	int maxFriends;

public:
	MemberArray();
	Member** getFriends() const { return friends; }
	int getNumOfFriends() const { return numOfFriends; }

    /*****  functions  ******/

  /*
  push() //add Status to last place
  showAllStatus()
  showLatest10thStatus()
  size() //return logSize
  capacity() //return physSize
  reserve(int n) //make the array bigger ig log=phys
  */
};

#endif //__MEMBERARRAY_H