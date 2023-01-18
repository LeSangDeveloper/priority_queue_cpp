#include<iostream>
#include<list>
#include<string>
#include"list_priority_queue.h"

using namespace std;

int main() {
    ListPriorityQueue<int, IsLess> queueList;
    queueList.insert(2);
    queueList.insert(1);
    queueList.insert(4);
    cout << queueList.min() << endl; queueList.removeMin();
    cout << queueList.min() << endl; queueList.removeMin();
    cout << queueList.min() << endl; queueList.removeMin();
    return 0;
}