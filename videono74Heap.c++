#include <bits/stdc++.h>
#include<queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {

        size = size + 1;  // size increase kiya yaha par
        int index = size; // index variable ko size ke equal kar diya
        arr[index] = val; // arr ki index me value store karenge

        // loop check kiya sahi position par reach karne ke liye
        while (index > 1)
        {

            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << " nothing to delete " << endl;
            return;
        }

        // step1 : put last element at first index
        arr[1] == arr[size];
        // step2 : remove the last element
        size--;

        // step3 : take root node to correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)
{

    int size = n;

    while (size > 1)
    {
        swap(arr[size], arr[1]);

        size--;
        heapify(arr, size, 1);
    }
}

int main()
{

    heap h;
    // insert elements into the array using push() function.
    h.insert(50);
    h.insert(52);
    h.insert(55);
    h.insert(54);

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 52, 55, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "priting the array now" << endl;
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);
    cout << "priting the sorted array " << endl;
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // maxheap

    priority_queue<int> pq;

    pq.push(5);
    pq.push(-789);
    pq.push(34);
    pq.push(2);    

    cout << "top of the element "<< pq.top()<<endl;
    pq.pop();

    cout<< "Top of the element "<< pq.top()<<endl;

    if(pq.empty()){
        cout<< "return empty"<<endl;
    }
    else{
        cout<< "not empty"<<endl;
    }

// Minheap
    priority_queue<int ,vector<int> , greater<int> > minheap;
    minheap.push(5);
    minheap.push(-789);
    minheap.push(34);
    minheap.push(2);    

    cout << "top of the element "<< minheap.top()<<endl;
    minheap.pop();

    cout<< "Top of the element "<< minheap.top()<<endl;

    if(minheap.empty()){
        cout<< "return empty"<<endl;
    }
    else{
        cout<< "not empty"<<endl;
    }

    return 0;
}