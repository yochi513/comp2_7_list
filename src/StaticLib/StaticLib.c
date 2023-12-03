#define WIN32_LEAN_AND_MEAN
#include "Windows.h"
#include "../include/lib_func.h"

// ノードを初期化
void initialize_node(node* p, int val)
{
    p->pNext = NULL;
    p->data = val;
}

// リストを初期化
void initialize_list(list* l)
{
    l->header = NULL;
}

// 先頭にデータを追加
void push_front(list* l, node* p)
{
    // ノードpをリストlの先頭に追加
    p->pNext = l->header;
    l->header = p;
}

// pの次のノードを削除
void remove_next(list* l, node* p)
{
    if (!p || !p->pNext) return; // pがNULLまたはpの次のノードが存在しない場合は何もしない

    node* temp = p->pNext;  
    p->pNext = temp->pNext; 

    
}

// pの次のノードを取得
node* get_next(node* p)
{
    if (!p) return NULL;

    return p->pNext;
}
