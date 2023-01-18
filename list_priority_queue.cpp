#include"list_priority_queue.h"
#include<list>

using namespace std;

template<typename E, typename C>
int ListPriorityQueue<E, C>::size() const
{ return L.size(); }

template<typename E, typename C>
bool ListPriorityQueue<E, C>::empty() const
{ return L.empty(); }

template<typename E, typename C>
void ListPriorityQueue<E, C>::insert(const E& e) {
    typename list<E>::iterator p;
    p = L.begin();
    while (p != L.end && isLess(e, *p)) ++p;
    L.insert(p, e);
}

template<typename E, typename C>
const E& ListPriorityQueue<E, C>::min() const {
    L.pop_front();
}