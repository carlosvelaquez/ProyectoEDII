#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class QueueNode{

private:
  T data;
  QueueNode<T>* next;
  QueueNode<T>* previous;

public:
  QueueNode(T nData){
    data = nData;
    next = 0;
    previous = 0;
  }

  QueueNode<T>* getNext(){
    return next;
  }

  void setNext(QueueNode<T>* nQueueNode){
    next = nQueueNode;
  }

  QueueNode<T>* getPrevious(){
    return previous;
  }

  void setPrevious(QueueNode<T>* nQueueNode){
    previous = nQueueNode;
  }

  T getData(){
    return data;
  }

  void setData(T nData){
    data = nData;
  }
};

template <class C>
class Queue{

private:
  QueueNode<C>* head;
  QueueNode<C>* tail;
  int capacity;
  int size;

public:
  Queue(){
    head = 0;
    tail = 0;
    capacity = -1;
    size = 0;
  }

  Queue(int nCapacity){
    head = 0;
    tail = 0;
    capacity = nCapacity;
    size = 0;
  }

  bool queue(C nData){
    if (size < capacity || capacity == -1) {
      if (head == 0) {
        head = new QueueNode<C>(nData);
        tail = head;
      }else{
        QueueNode<C>* temp = new QueueNode<C>(nData);
        tail->setNext(temp);
        tail = temp;
      }

      size ++;
      return true;
    }else{
      return false;
    }
  }

  C dequeue(){
    if (size <= 0) {
      return 0;
    }else{
      C retData = head->getData();
      head = head->getNext();
      size --;

      return retData;
    }
  }

  int getSize(){
    return size;
  }

  bool isEmpty(){
    if (size <= 0) {
      return true;
    }else{
      return false;
    }
  }

  ~Queue(){
    while (!isEmpty()) {
      dequeue();
    }
  }

};

#endif /* end of include guard: QUEUE_H */
