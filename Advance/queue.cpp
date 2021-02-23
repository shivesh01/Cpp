// Queue implementation in C++
#include <iostream>
#define SIZE 5

using namespace std;

class Queue{
    private:
    int items[SIZE], front, rear;

    public:  
    Queue(){
        front =-1;
        rear = -1;

    }

    bool isFull(){
        if(front == 0 && rear == SIZE-1){
            return true;

        }
        return false;
    }
    bool isEmpty(){
        if (front == -1)
        return true ;
        else 
        return false;

    }
    void enQueue(int element){
        if (isFull()){
            cout <<"Queue is full";

        }
        else{
            if(front == -1)
            front = 0;
            rear++;
            items[rear] = element;
            cout<<endl<<"Inserted "<<element<<endl;

        }
    }

    int deQueue(){
        int element;
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return (-1);
        
        }
        else{
            element = items[front];
            if(front >= rear){
                front = -1;
                rear = -1;
            } // Queue has only one element, so we reset the queue after deleting it.
            else{
                front++;
            }
            cout<<endl<<"Deleted -> "<<element <<endl;
            return (element);
            
        }
    }
    void display(){
        // Function to display elements of Queue
        int i;
        if (isEmpty()){
            cout<<endl<<
            "Empty Queue"<<endl;

        }
        else{
            cout<<endl<<"Front index-> "<<front;
            cout<<endl<<"Items -> ";
            for (i = front; i<= rear; i++)
                cout<<items[i]<<" ";
            cout<<endl
            << "Rear index-> "<<rear<<endl;
        }
    }


};

int main(){
    Queue q;

// Queue is already empty, so deQueue is not possible
    q.deQueue();

// enQueue 5 element: Adding 5 element to Queue
q.enQueue(1);
q.enQueue(2);
q.enQueue(3);
q.enQueue(4);
q.enQueue(5);

// Queue size is 5 and full, so we can't add one more element.
q.enQueue(6);

q.display();

// deQueuw removes one element i.e entered first(1)
q.deQueue();

//Now we have just 4 elements, let's display it.
q.display();

return 0;
}
