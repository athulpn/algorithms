
#include <stdio.h>
#include<stdbool.h>

void max_heapify(int *heap, int node, int heap_size)
{
    int right = 2*node+1;
    int left = 2*node;
    if(node <= heap_size)
    {
        bool rightl=0;
        rightl = heap[right-1]>heap[left-1]?1:0;
        if(rightl&&heap[node-1]< heap[right-1] && right <= heap_size)
        {
            int temp = heap[node-1];
            heap[node-1] = heap[right-1];
            heap[right-1] = temp;
            printf("swaped %d and %d\n", heap[node-1], heap[right-1]);
            max_heapify(heap, right , heap_size);
            
        }
        if(!rightl && heap[node-1]< heap[left-1] && left<=heap_size)
        {
            int temp = heap[node-1];
            heap[node-1] = heap[left-1];
            heap[left-1] = temp;
             printf("swaped %d and %d\n", heap[node-1], heap[left-1]);
            max_heapify(heap, left , heap_size);
           
        }
        
    }
}

void build_max_heap(int heap[], int heap_size)
{
  for(int i=heap_size/2; i>0;i--)
    max_heapify(heap, i, heap_size);
}

int main()
{
   int heap[10] = {1 ,2, 3, 4, 5, 6, 7, 8, 9, 10};
   build_max_heap(heap, 10);
   for(int i=0; i< 10; i++)
   {
       printf("%d ", heap[i]);
   }
}