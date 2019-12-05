### **C++ STL:**

### **1.INTRODUCTION**

In this Blog , I am going to introduce to you the uses of the c++ STL. I assume That you already know basic functions of c++ or that you are a c++ programmer who just want to deepen his knowledge in the c++ programming language,you can also be a c++ programmer who wants to remind himself some aspects of this language.

### **2.Requirements**

Some tools are of need for you to actually pursue this tutorial and this includes the following:
✅A c++ Compiler and debugger(❌ obligatory) click here if you don’t have one
✅A c++ IDE(not necessary you can use any text editor and run your code in terminal)click here if you don’t have one

### **3.NOTES SYMBOLS:**

>   I will use some symbols to specify the importance of the current section or the use of it, here they are:
>         ❌   when you see this symbol, critical information that you best do not miss is to come so be aware 
>          ❗   this one means important information that is to come
>            💾     this one means that the section below is code
> 
### **4.What is the STL**
The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. A working knowledge of template classes is a prerequisite for working with STL.

So then let’s get started everyone.





### **C++ STL.**

### **◾std::vector**

>  _❗Vectors are same as dynamic arrays with the ability to resize itself automatically when an
> element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
> Imagine it this way: you have a series of boxes connected together. Once all these boxes are used up, you would usually transfer all your things to a new, larger box. But not with vectors!_

### **std::vector methods**
### **[vector  Iterator methods:](https://github.com/juju-e/test_STL/test.cpp)**
begin() – Returns an iterator pointing to the first element in the vector 
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector 
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element 
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end) 
cbegin() – Returns a constant iterator pointing to the first element in the vector. 
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector. 
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element 
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end) 

### **[c++ vector capacity methods](https://github.com/juju-e/test_STL/capacity.cpp)**
size() – Returns the number of elements in the vector. 
max_size() – Returns the maximum number of elements that the vector can hold. 
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements. 
resize(n) – Resizes the container so that it contains ‘n’ elements.        
![alt-text](https://github.com/juju-e/test_STL/pic/resize.png"hover")
empty() – Returns whether the container is empty. 
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity. 
reserve() – Requests that the vector capacity be at least enough to contain n elements.
 ### **[c++ vector capacity element access methods](https://github.com/juju-e/test_STL/access.cpp)**
reference operator [g] – Returns a reference to the element at position ‘g’ in the vector 
at(g) – Returns a reference to the element at position ‘g’ in the vector 
front() – Returns a reference to the first element in the vector 
back() – Returns a reference to the last element in the vector 
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements. 
 ### **[c++ vector Modifiers methods](https://github.com/juju-e/test_STL/modifiers.cpp)**
assign() – It assigns new value to the vector elements by replacing old ones 
push_back() – It push the elements into a vector from the back 
![alt-text](https://github.com/juju-e/test_STL/pic/pub.png"push-back")
pop_back() – It is used to pop or remove elements from a vector from the back.      
![alt-text](https://github.com/juju-e/test_STL/pic/pob.png"pop-back")
insert() – It inserts new elements before the element at the specified position 
erase() – It is used to remove elements from a container from the specified position or range. 
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ. 
clear() – It is used to remove all the elements of the vector container 
emplace() – It extends the container by inserting new element at position 
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector.


_This is not the complete list of all functions because there are plenty of them I just did a list of those that I have personally used in my projects, personally std::vector is the best dynamic container that I have ever used in c++, it’s ease to use, fast traversal and the storage mechanics make it an even better choice for a beginner competitive programmer._
### **◾std::list:**
Next we have  std::list which introduces the core concepts of a c++ list,

 _❗Lists are sequence containers that allow non-contiguous memory allocation. As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick. Normally, when we say a List, we talk about doubly linked list if you’ve well pursued my lesson about c++ std::vector STL you won’t have any difficulty grasping the concepts of a c++ std::list. For implementing a singly linked list, we use forward list which I will introduce in a later lesson._
###  **Here are some common std::list methods:**
    • front() – Returns the value of the first element in the list. 
    • back() – Returns the value of the last element in the list . 
    • push_front(g) – Adds a new element ‘g’ at the beginning of the list . 
    • push_back(g) – Adds a new element ‘g’ at the end of the list. 
    • pop_front() – Removes the first element of the list, and reduces size of the list by 1. 
    • pop_back() – Removes the last element of the list, and reduces size of the list by 1 
    • list::begin() and list::end() in C++ STL– begin() function returns an iterator pointing to the first element of the list 
    • end()– end() function returns an iterator pointing to the theoretical last element which follows the last element. 
    • list rbegin() and rend() function in C++ STL– rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list. 
    • list cbegin() and cend() function in C++ STL– cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list. 
    • list crbegin() and crend() function in C++ STL– crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list. 
    • empty() – Returns whether the list is empty(1) or not(0). 
    • insert() – Inserts new elements in the list before the element at a specified position. 
    • erase() – Removes a single element or a range of elements from the list. 
    • assign() – Assigns new elements to list by replacing current elements and resizes the list. 
    • remove() – Removes all the elements from the list, which are equal to given element. 
    • list::remove_if() in C++ STL– Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function. 
    • reverse() – Reverses the list. 
    • size() – Returns the number of elements in the list. 
    • list resize()function in C++ STL– Used to resize a list container. 
    • sort() – Sorts the list in increasing order. 
    • list max_size() function in C++ STL– Returns the maximum number of elements a list container can hold. 
    • list unique() in C++ STL– Removes all duplicate consecutive elements from the list. 
    • list::emplace_front() and list::emplace_back() in C++ STL– emplace_front() function is used to insert a new element into the list container, the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, the new element is added to the end of the list. 
    • list::clear() in C++ STL– clear() function is used to remove all the elements of the list container, thus making it size 0. 
    • list::operator= in C++ STL– This operator is used to assign new contents to the container by replacing the existing contents. 
    • list::swap() in C++ STL– This function is used to swap the contents of one list with another list of same type and size. 
    • list splice() function in C++ STL– Used to transfer elements from one list to another. 
    • list merge() function in C++ STL– Merges two sorted lists into one 
    • list emplace() function in C++ STL– Extends list by inserting new element at a given position. 

❌  most of std::list methods just work like std::vector's except some
> _❗   The biggest improvement that std::list can provide is when you're moving one or more elements from the middle of one list into another list. This splice operation is extremely efficient on list while it may involve allocation and movement of items in random access containers such as vector._

### **◾ Std::map**
_Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have same key values.
You can think of it as shows this visual representation:
![alt-text](https://github.com/juju-e/test_STL/pic/map2.png"push-back")
in this representation apple is the key and banana is the value.
The basic syntax to initialize a c++ map is the following:_
 ![alt-text](https://github.com/juju-e/test_STL/pic/map2.png"push-back")
### **[Some basic functions associated with Map:](https://github.com/juju-e/test_STL/map.cpp)**
map insert() in C++ STL– Insert elements with a particular key in the map container. . 
    • map count() function in C++ STL– Returns the number of matches to element with key value ‘g’ in the map. 
    • map equal_range() in C++ STL– Returns an iterator of pairs. The pair refers to the bounds of a range that includes all the elements in the container which have a key equivalent to k. 
    • map erase() function in C++ STL– Used to erase element from the container. 
    • map rend() function in C++ STL– Returns a reverse iterator pointing to the theoretical element right before the first key-value pair in the map(which is considered its reverse end). 
    • map rbegin() function in C++ STL– Returns a reverse iterator which points to the last element of the map. 
    • map find() function in C++ STL– Returns an iterator to the element with key value ‘g’ in the map if found, else returns the iterator to end. 
    • map crbegin() and crend() function in C++ STL– crbegin() returns a constant reverse iterator referring to the last element in the map container. crend() returns a constant reverse iterator pointing to the theoretical element before the first element in the map. 
    • map cbegin() and cend() function in C++ STL– cbegin() returns a constant iterator referring to the first element in the map container. cend() returns a constant iterator pointing to the theoretical element that follows last element in the multimap. 
    • map emplace() in C++ STL– Inserts the key and its element in the map container. 
    • map max_size() in C++ STL– Returns the maximum number of elements a map container can hold. 
    • map upper_bound() function in C++ STL– Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will go after the element with key value ‘g’ in the map 
    • map operator= in C++ STL– Assigns contents of a container to a different container, replacing its current content. 
    • map lower_bound() function in C++ STL– Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’ or definitely will not go before the element with key value ‘g’ in the map. 
    • map emplace_hint() function in C++ STL– Inserts the key and its element in the map container with a given hint. 
    • map value_comp() in C++ STL– Returns the object that determines how the elements in the map are ordered (‘<' by default). 
    • map key_comp() function in C++ STL– Returns the object that determines how the elements in the map are ordered (‘<' by default). 
    • map::size() in C++ STL– Returns the number of elements in the map. 
    • map::empty() in C++ STL– Returns whether the map is empty. 
    • map::begin() and end() in C++ STL– begin() returns an iterator to the first element in the map. end() returns an iterator to the theoretical element that follows last element in the map 
    • map::operator[] in C++ STL– This operator is used to reference the element present at position given inside the operator. 
    • map::clear() in C++ STL– Removes all the elements from the map. 
    • map::at() and map::swap() in C++ STL– at() function is used to return the reference to the element associated with the key k. swap() function is used to exchange the contents of two maps but the maps must be of same type, although sizes may differ. 
### **◾ std::set**

Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it. The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element.

[Methods of set: ](https://github.com/juju-e/test_STL/set.cpp)
    • begin() – Returns an iterator to the first element in the set. 
    • end() – Returns an iterator to the theoretical element that follows last element in the set. 
    • rbegin()– Returns a reverse iterator pointing to the last element in the container. 
    • rend()– Returns a reverse iterator pointing to the theoretical element right before the first element in the set container. 
    • crbegin()– Returns a constant iterator pointing to the last element in the container. 
    • crend() – Returns a constant iterator pointing to the position just before the first element in the container. 
    • cbegin()– Returns a constant iterator pointing to the first element in the container. 
    • cend() – Returns a constant iterator pointing to the position past the last element in the container. 
    • size() – Returns the number of elements in the set. 
    • max_size() – Returns the maximum number of elements that the set can hold. 
    • empty() – Returns whether the set is empty. 
    • insert(const g) – Adds a new element ‘g’ to the set. 
    • iterator insert (iterator position, const g) – Adds a new element ‘g’ at the position pointed by iterator. 
    • erase(iterator position) – Removes the element at the position pointed by the iterator. 
    • erase(const g)– Removes the value ‘g’ from the set. 
    • clear() – Removes all the elements from the set. 
    • key_comp() / value_comp() – Returns the object that determines how the elements in the set are ordered (‘<‘ by default). 
    • find(const g) – Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to end. 
    • count(const g) – Returns 1 or 0 based on the element ‘g’ is present in the set or not. 
    • lower_bound(const g) – Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set. 
    • upper_bound(const g) – Returns an iterator to the first element that is equivalent to ‘g’ or definitely will go after the element ‘g’ in the set. 
    • equal_range()– The function returns an iterator of pairs. (key_comp). The pair refers to the range that includes all the elements in the container which have a key equivalent to k. 
    • emplace()– This function is used to insert a new element into the set container, only if the element to be inserted is unique and does not already exists in the set. 
    • emplace_hint()– Returns an iterator pointing to the position where the insertion is done. If the element passed in the parameter already exists, then it returns an iterator pointing to the position where the existing element is. 
    • swap()– This function is used to exchange the contents of two sets but the sets must be of same type, although sizes may differ. 
    • operator= – The ‘=’ is an operator in C++ STL which copies (or moves) a set to another set and set::operator= is the corresponding operator function. 
    • get_allocator()– Returns the copy of the allocator object associated with the set. 
### **◾ Pair**

_The pair container is a simple container defined in <utility> header consisting of two data elements or objects._ 

> 
> 
>     The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
>     Pair is used to combine together two values which may be different in type. Pair provides a way to store two heterogeneous objects as a single unit.
>     Pair can be assigned, copied and compared. The array of objects allocated in a map or hash_map are of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
>     To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
> 
**Syntax :**

` pair (data_type1, data_type2) Pair_name;`
[source](https://github.com/juju-e/test_STL/pair1)
[ We can also initialize a pair.](https://github.com/juju-e/test_STL/pair_init.cpp)
Syntax :

`pair (data_type1, data_type2) Pair_name (value1, value2) ;`

Different ways to initialize pair:
```

pair  g1;         //default
pair  g2(1, 'a');  //initialized,  different data type
pair  g3(1, 10);   //initialized,  same data type
pair  g4(g3);    //copy of g3

```
Another way to initialize a pair is by using the make_pair() function.
`
g2 = make_pair(1, 'a');`
[source-code](https://github.com/juju-e/test_STL/pair2.cpp)

> ❗If not initialized, the first value of the pair gets [automatically initialized.](https://github.com/juju-e/test_STL/pair_auto_init.cpp)


###  **_STL interesting facts:_**

**_This a header file that includes every standard library.
You can use it to save time.
NOTE: This header file may not be recognized by compilers
other than gcc._**
### **_💾_**
`#include <bits/stdc++.h>`
_**Use this if the above header file doesn't work.**_
```
#include <iostream>
#include <algorithm>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <vector>
```
❌  this is not the list of the complete functions of the stl if you want to include more please click [here](https://en.cppreference.com/w/cpp/header)


_**Functors**_

> Please note that the title is Functors (Not Functions)!!
This is one of the one of the lesser known aspects of the stl or maybe of the whole c++ programming language.
Consider a function that takes only one argument. However, while calling this function we have a lot more information that we would like to pass to this function, but we cannot as it accepts only one parameter. What can be done?

One obvious answer might be global variables. However, good coding practices do not advocate the use of global variables and say they must be used only when there is no other alternative.


Functors are objects that can be treated as though they are a function or function pointer. Functors are most commonly used along with STLs in a scenario like following:

Below program uses transform() in STL to add 1 to all elements of arr[].
💾
```
// A C++ program uses transform() in STL to add 
// 1 to all elements of arr[] 
#include <bits/stdc++.h> 
using namespace std; 

int increment(int x) { return (x+1); } 

int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	// Apply increment to all elements of 
	// arr[] and store the modified elements 
	// back in arr[] 
	transform(arr, arr+n, arr, increment); 

	for (int i=0; i<n; i++) 
		cout << arr[i] << S" "; 

	return 0; 
} 

```
Let’s dig in deeper and understand how this can actually be used in conjunction with STLs.
Thus,[here](https://github.com/juju-e/test_STL/functors.cpp), Increment is a functor, a c++ class that acts as a function.
The line,
`transform(arr, arr+n, arr, increment(to_add));`
is the same as writing below two lines,
```

> // Creating object of increment
> increment obj(to_add); 
> 
> // Calling () on object
> transform(arr, arr+n, arr, obj); 
> 

```
Thus, an object a is created that overloads the operator(). Hence, functors can be used effectively in conjunction with C++ STLs.
