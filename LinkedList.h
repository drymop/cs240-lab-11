#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <list>
#include <stdexcept>
#include <sstream>
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
int
LinkedList<T>::
size() const
{
    return theList.size();
}


template <class T>
void
LinkedList<T>::
add(T element)
{
    theList.push_back(element);
}


template <class T>
T
LinkedList<T>::
get(int index) const
{
    if (index < 0 || index > size()) {
        std::stringstream ss;
        ss << "invalid index: " << index << ", list size: " << size();
        std::string msg = ss.str();
        throw std::invalid_argument(msg);
    }
    typename std::list<T>::const_iterator it = theList.begin();
    std::advance(it, index);
    return *it;
}


template <class T>
T
LinkedList<T>::
remove(int index)
{
    if (index < 0 || index > size()) {
        std::stringstream ss;
        ss << "invalid index: " << index << ", list size: " << size();
        std::string msg = ss.str();
        throw std::invalid_argument(msg);
    }
    typename std::list<T>::iterator it = theList.begin();
    std::advance(it, index);
    theList.erase(it);
}


template <class T>
std::vector<T>
LinkedList<T>::
toArray() const
{
    std::vector<T> vec;
    return vec;
}


template <class T>
LinkedList<T>&
LinkedList<T>::
operator+=(const T& item)
{
    return *this;
}

#endif
