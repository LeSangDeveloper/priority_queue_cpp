#ifndef LIST_PRIORITY_QUEUE_H
#define LIST_PRIORITY_QUEUE_H

#include<list>

template<typename E, typename C>
class ListPriorityQueue {
    private:
        std::list<E> L;
        C isLess;
    public:
        int size() const;
        bool empty() const;
        void insert(const E& e);
        const E& min() const;
        void removeMin();
}

#endif