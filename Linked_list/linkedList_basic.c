//记得内存管理，释放内存！！
//链表的基础操作

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    Node *next ;
}Node;

//如果不return指针的话，就要用二级指针（值传递的问题）

Node* createNewNode ( int data )
{
    Node *newNode = ( Node *) calloc ( 1 , sizeof (Node) ) ;
    newNode->data = data ;
    newNode->next = NULL ; //先初始化为NULL
    return newNode ; 
}

Node* createNewHead ( int data , Node *head )
{
    Node *newHead = createNewNode ( data ) ;
    newHead->next = head ;
    return newHead ;
}

void createNewTail ( int data , Node *head ) //对于查找节点，只用head！！其他通过next递推！
{
    Node *newTail = createNewNode ( data ) ;
    
    //讨论：如果链表为空，就是头节点
    if ( head == NULL )
    {
        return ;
    }
    
    //查找tail
    else
    {
        Node *current = head ; 

        while ( current != NULL )
        {
            current = current->next ;
        }
        //现在current是尾节点了

        current->next = newTail ;
       
    }
}

void deleteNode ( int data_delete , Node *head )
{
    if ( head == NULL || head->next == NULL )
    {
        return ;
    }

    //如果要删除的刚好是头节点，单独讨论
    if ( head->data == data_delete )
    {
        head->next = NULL ;
    }

    Node *current = head ;
    while ( current->next != NULL )
    {
        if ( current->next->data == data_delete )
        {
            break ;
        }
        current = current->next ;
    }
    //现在current就是我们要删除的节点之前的那个节点

    current->next = current->next->next ;
}

//在数据为data的节点后插入新节点
void insertNewNode ( int data , Node *head , int data_new )
{

    Node *newNode = createNewNode(data_new) ;

    Node *current = head ;
    while ( current->next != NULL )
    {
        if ( current->data == data )
        {
            //现在current就是我们要添加的节点之前的那个节点
            Node *temp = head->next ; //要单独讨论：如果tail是我们要找的节点
            head->next = newNode ;
            newNode->next = temp ;
            
            return ;
        }
        current = current->next ;
    }
    
}

void printall ( Node *head )
{
    Node *current = head ;
    while ( current != NULL )
    {
        printf ("%d " , current->data ) ;
        current = current->next ;
    }

    printf ("%d" , current->data ) ;
}

int main() {
    // 1. 创建链表
    Node* head = NULL;
    head = insertHead(head, 10);
    head = insertHead(head, 20);
    
    // 2. 使用链表
    
    
    // 3. 统一释放（复制这个函数即可）
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
    head = NULL;  // 重要！
    
    return 0;
}