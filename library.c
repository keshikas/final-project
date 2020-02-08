#include <stdio.h> 
#include <stdlib.h> 
  
struct QNode { 
    int key; 
    struct QNode* next; 
}; 
  

struct Queue { 
    struct QNode *front, *rear; 
}; 
  

struct QNode* newNode(int k) 
{ 
    struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode)); 
    temp->key = k; 
    temp->next = NULL; 
    return temp; 
} 
  

struct Queue* createQueue() 
{ 
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue)); 
    q->front = q->rear = NULL; 
    return q; 
} 
  

void enQueue(struct Queue* q, int k) 
{ 
   
    struct QNode* temp = newNode(k); 
  

    if (q->rear == NULL) { 
        q->front = q->rear = temp; 
        return; 
    } 
  

    q->rear->next = temp; 
    q->rear = temp; 
} 

void deQueue(struct Queue* q) 
{ 
    
    if (q->front == NULL) 
       { 
        return;
       }
 else{
  
    struct QNode* temp = q->front; 
  
    q->front = q->front->next; 

    if (q->front == NULL) 
        q->rear = NULL; 
  
    free(temp);
    
} 
}
  

int check(struct Queue* q) 
{ 
    
    if (q->front == NULL) 
       
        return 0;
       
 else return 1;
  
   
}
 
int main() 
{   
    
    struct Queue* HarryPotter = createQueue(); 
    struct Queue* Inkheart = createQueue();
    struct Queue* ArtemisFowl = createQueue();
    struct Queue* HungerGames = createQueue();
    int i=1;
  
    
    printf("Choose one of the following books\n1.Harry Potter\n2.Inkheart\n3.ArtemisFowl\n4.HungerGames\n");
    int n=1;

    if(n==1)
    {if(check(HarryPotter)==0)
    {printf("Reservation Confirmed\n");
    enQueue(HarryPotter,1);
    }
    else("Book engaged\n");
 }
    if(n==2)
   {if(check(Inkheart)==0)
    enQueue(Inkheart,1);
    else("Book engaged");
    }
    if(n==3)
 {if(check(ArtemisFowl)==0)
    enQueue(ArtemisFowl,1);
    else("Book engaged");
    }
    if(n==4)
   {if(check(HungerGames)==0)
    enQueue(HungerGames,1);
    else("Book engaged");
    }

   
    if(check(HarryPotter)==0)
    {printf("Reservation confirmed");
    enQueue(HarryPotter,1);
    }
    else("Book engaged\n");
   
    
    
    return 0; 
}