#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <vector>

template <class T>
class LinkedList
{
   private:
     std::list<T> theList;

   public:
     LinkedList();
     LinkedList(const LinkedList<T>& other);
     ~LinkedList();

     int  size() const;
     void add(T element);

     T get(int index) const;
     T remove(int index); 

     std::vector<T> toArray() const;

     LinkedList<T>& operator+=( const T& item );
};


template <class T>
LinkedList<T>::
LinkedList() {}


template <class T>
LinkedList<T>::
~LinkedList() {}


template <class T>
LinkedList<T>::
LinkedList(const LinkedList<T>& other)
    : theList(other.theList) {}


template <class T>
LinkedList<T>::
size()
{
    return theList.size();
}


template <class T>
LinkedList<T>::
add(T element)
{
    theList.push_back(element);
}




#endif