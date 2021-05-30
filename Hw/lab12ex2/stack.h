//
// Created by ShanK on 2021/5/6.
//

#ifndef HW_STACK_H
#define HW_STACK_H
class Stack{
private:
    enum {MAX = 10};
    Item * pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
};
#endif //HW_STACK_H
