#include"list_priority_queue.h"
#include<list>
#include<string>

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
    while (p != L.end() && isLess(e, *p)) ++p;
    L.insert(p, e);
}

template<typename E, typename C>
const E& ListPriorityQueue<E, C>::min() const {
    return L.front();
}

template<typename E, typename C>
void ListPriorityQueue<E, C>::removeMin() {
    L.pop_front();
}

template class ListPriorityQueue<int, IsLess>;
template class ListPriorityQueue<double, IsLess>;
template class ListPriorityQueue<float, IsLess>;
template class ListPriorityQueue<bool, IsLess>;